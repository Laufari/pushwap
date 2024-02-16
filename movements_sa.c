/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_sa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:54:18 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/16 16:02:33 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa swap a: Intercambia los dos primeros elementos del stack a.
//No hace nada si hay uno o menos elementos

int swap(t_stack *a )
{
	t_disco	*tmp;

	if (a == NULL || a->first == NULL || a->first->next == NULL)
		return (1);
	tmp = a->first->next;
	a->first->next = tmp->next;
	tmp->next = a->first;
	a->first = tmp;
	printf("sa\n");
	return (0);
}





//pa push a: Toma el primer elemento del stack b
//y lo pone el primero en el stack
//a. No hace nada si b está vacío.

int	push(t_stack *from, t_stack *to)
{
	t_disco	*tmp;

	if (from == NULL || from->first == NULL)
		return (1);

		tmp = from->first->next;
		from->first->next = to->first;
		to->first = from->first;
		from->first = tmp;
		printf("pa\n");
	return (0);	
}



//ra rotate a: Desplaza hacia arriba todos los elementos del stack a 
//una posición,
//de forma que el primer elemento se convierte en el último.
//

int	rotate(t_stack *a)
{
	t_disco *tmp;
	t_disco *n_first;

	if (a == NULL || a->first == NULL)
		return (1);
	tmp = a->first;
	n_first = a->first->next;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;	
	}
	tmp->next = a->first;
	a->first->next = NULL;
	a->first = n_first;
	printf("ra\n");
	return (0);
}


//rra reverse rotate a: Desplaza hacia abajo todos los elementos del stack
//a una posición, de forma que el último elemento se convierte en el primero
int	rev_rotate(t_stack *a)
{
	t_disco *temp;
	t_disco *last;
//	t_disco *fir;

	
	if (a == NULL || a->first == NULL)
	   return (1);
	temp = a->first;
	last = a->first;
	while (temp->next != NULL)
	{
		last = temp;
		temp = temp->next;
	}
	last->next = NULL;
	temp->next = a->first;
	a->first = temp;
	printf("rra\n");
	return(0);
}

//rra reverse rotate a: Desplaza hacia abajo todos los elementos del stack a 
//una posición, de forma que el último elemento se convierte en el primero





//sb swap b: Intercambia los dos primeros elementos del stack b.
//No hace nada si hay uno o menos elementos.



//pb push b: Toma el primer elemento del stack a y lo pone el primero en el 
//stack b. No hace nada si a está vacío.



//rb rotate b: Desplaza hacia arriba 
//todos los elementos del stack b una posición,
//de forma que el primer elemento se convierte en el último.



//rrb reverse rotate b: Desplaza hacia abajo
//todos los elementos del stack b una posición,
// de forma que el último elemento se convierte en el primero.



//ss swap a y swap b a la vez.



//rr ra y rb al mismo tiempo.



//rrr rra y rrb al mismo tiempo.
