/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:50:42 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 17:01:47 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case_5(t_stack *a, t_stack *b)
{
	smallest_on_top(a, 0);
	push_b(a, b);
	if (a->len == 4)
	{
		smallest_on_top(a, 1);
		push_b(a, b);
	}
	sort_case_3(a);
	while (b->first)
	{
		printf("entra en el while problematico\n");
		push_a(b, a);
		print_stack(a);
	}
}
/*	t_disco	*tmp;
	int		 i;

	i = 0;
	tmp = a->first;
	while (!are_in_order(a))
	
	{
		if (tmp->index != smallest(a))
        {	while (tmp->index != 0)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < a->len/ 2)
	{
		while (a->first->index != 0)
			rotate_a(a);
	}
	else
	{
		while (a->first->index != 0)
			rev_rotate_a(a);
	}
		}
	   	push_b(a, b);
		sort_case_4(a,b);
       while (b->first)
		push_a(b, a);
        
		printf("queeee\n");
        tmp = a->first;
    }		print_stack(a);
}*/
