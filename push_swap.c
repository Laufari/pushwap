/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:12:37 by laufarin          #+#    #+#             */
/*   Updated: 2024/01/07 20:58:10 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int create_discos_and_insert_in_stack_a(t_stack *a, int argc, char **argv)
{
	t_disco *tmp;
	t_disco *new;
	int j;
	
	j = 1;

	while(j< argc)
	{
	 	tmp = malloc(sizeof(t_disco) * 1);
	 	tmp->value = ft_atoi(argv[j]);
	 	a.first = tmp;
        tmp->next = NULL;

        new = malloc(sizeof(t_disco) * 1);
        new->value = ft_atoi(argv[j]);
        tmp->next = new;
        new->next = NULL;


        j++;
    }

	// Crear una primera pieza, y ponerla como first de stack a con next the a a nULL, i como value el que le toca
	// A partide  ahi ir creando las demas piezas e irlas enlazando a la ultima pieza creada
}

//Coger los argumentos y validarlos
int main(int argc, char **argv)
{//Vamos a crear los stacks
	t_stack a;
	t_stack b;
sx
	a.first = NULL;
	b.first = NULL;
	a.len = 0;
	b.len = 0;

	if (check_arguments(argc, argv) == 0)
	{
		write(2, "Error\n", 6);
		return 0;
	}

	//Si todo correcto seguimos
	write(1, "Todo correcto seguimos!!!! ya veremos como!!!\n", 46);

	//vamos a crear las piezas y insertarlas en stack a;
	if(!create_discos_and_insert_in_stack_a(&a, argc, argv))
	{
		write(2, "Error\n", 6);
		return 0;
	}

	//Vamos a dar el valor de indices
	
	//Vamos a checkear si ya esta ordenado

	//si no esta ordenado resolvemos

	//limpiamos memoria i salimos

	return(1); 
}
