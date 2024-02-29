/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:24:33 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 12:27:39 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case_4(t_stack *a, t_stack *b)
{
	t_disco	*tmp;

	tmp = a->first;
	while (!are_in_order(a))
	{
		if (tmp->index != smallest(a))
		{
		//	print_stack(a);
			if (tmp->next->index == smallest(a))
				swap_a(a);
			else if (tmp->next->next->index == smallest(a))
			{
				rev_rotate_a(a);
				rev_rotate_a(a);
			}
		}
			push_b(a, b);
			sort_case_3(a);
			push_a(b, a);
			tmp = a->first;
	}
//	print_stack(a);
//	print_stack(b);
}
