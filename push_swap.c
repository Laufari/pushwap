/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:12:37 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/16 16:09:22 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void asign_index_to_disco(t_stack *a,  t_disco *node)
{
	t_disco 	*first;
	t_disco 	*temp;
	int 		i;
	
	printf(" %d\n", a->len);
	first = node;
	while(node)
	{
		i = 0;
		temp = first;
		while(temp)
		{
			if (temp->value < node->value)
				i++;
			temp = temp->next;
		}
		node->index = i;
	   	node = node->next;
	}
}

int create_discos_and_insert_in_stack_a(t_stack *a, int argc, char **argv)
{
	t_disco *tmp;
	t_disco *new;
	int j;
	int is_first;
	
	j = 1;
	is_first = 1;
	while(j< argc)
	{
	 	new = malloc(sizeof(t_disco) * 1);
		if(!new)
			return(0);
	 	new->value = ft_atoi(argv[j]);
		if(is_first == 1)
		{
		//	printf("asiganando new\n");
			a->first = new;
			is_first = 0;
		}
		else
			tmp->next = new;
		new->next = NULL;
		tmp = new;
        j++;
    }
	return (1);
	//Crear una primera pieza, y ponerla como first de stack a con next the a a nULL,
	//i como value el que le toca
	// A partide  ahi ir creando las demas piezas e irlas enlazando
	// a la ultima pieza creada
}

void print_stack(t_stack *a)
{
	t_disco *tmp;
	tmp = a->first;
	printf("Debug list\n");
	while(tmp)
	{
		printf("value: %d\tindex: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
}

//Coger los argumentos y validarlos
int main(int argc, char **argv)
{//Vamos a crear los stacks
	t_stack a;
	t_stack b;

	a.first = NULL;
	b.first = NULL;
	//char *ret;
	a.len = 0;
	b.len = 0;

	if (argc < 2)
		return (0);
	if (check_arguments(argc, argv) == 0)
	{
		write(2, "Error\n", 6);
		return 0;
	}

	//Si todo correcto seguimos
//	write(1, "Todo correcto seguimos!!!! ya veremos como!!!\n", 46);

	//vamos a crear las piezas y insertarlas en stack a;
	if(!create_discos_and_insert_in_stack_a(&a, argc, argv))
	{
		write(2, "Error\n", 6);
		return 0;
	}
	//void asign_index_to_disco(t_stack *a, t_disco *pieza)
	// el indice de la pieza sera la cantidad de piezas 
	// que tengan menos valor que la pieza que estoy mirando	

	asign_index_to_disco(&a, a.first);
	
	if(!are_in_order(&a))
	{
		ft_lstsize(&a);
		printf("No esta ordenado, i el len de a es %d\n", a.len);
		print_stack(&a);
		if(a.len == 2)
			sort_case_2(&a);
		print_stack(&a);
		if(a.len == 3)
			sort_case_3(&a);
		print_stack(&a);
		if(a.len == 4)
		sort_case_4(&a, &b);
		print_stack (&a);
		if(a.len == 5)
		sort_case_5(&a, &b);
		print_stack (&a);
	//	else if(a.len > 5)
			  //radix_sort()

	}

	//ULTIMO PASO:i
	// Free piezas del stack a

}

void sort_case_2(t_stack *s)
{
	swap(s); 
}

void	sort_case_3(t_stack *s)
{
	t_disco	*tmp;

	tmp = s->first;
	while(!are_in_order(s))
	{
		if (tmp->index == biggest(s))
			rotate(s);
		else if (tmp->next->index == biggest(s))
			rev_rotate(s);
		else if (tmp->next->next->index == biggest(s))
			swap(s);	
		tmp = s->first;
	}
}

void    sort_case_4(t_stack *a, t_stack *b)
{
	t_disco	*tmp;

	tmp = a->first;
	while (!are_in_order(a))
	{
		
		if (tmp->index == smallest(a))
		{
			push(a, b);
		sort_case_3(a);
		push(b, a);
		}
		else if (tmp->next->index == smallest(a))
		{
			swap(a);
		push(a, b);
		sort_case_3(a);
		push(b, a);
		}
		else if (tmp->next->next->index == smallest(a))
		{
			rev_rotate(a);
		rev_rotate(a);
		push(a, b);
		sort_case_3(a);
		push(b, a);
		}
		else if (tmp->next->next->next->index == smallest(a))
		{
			rotate(a);
		push(a, b);
		sort_case_3(a);
		push(b, a);
		}
	tmp = a->first;
	}
}

void	sort_case_5(t_stack *a, t_stack *b)
{
	t_disco	*tmp;

	tmp  = a->first;
	while (!are_in_order(a))
	{
		 if (tmp->index == smallest(a))
        {
            push(a, b);
        sort_case_4(a, b);
        push(b, a);
		sort_case_3(a);
        }
		tmp = a->first;	
	}
}



//Vamos a checkear si ya esta ordenado
	
int	are_in_order(t_stack *a)
{
	t_disco	*tmp;

	tmp = a->first;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	//printf("estan ordenados\n");
	return(1);
}
	
