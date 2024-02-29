/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_y_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:47:57 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 16:59:43 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case_2(t_stack *s)
{
	swap_a(s);
}

void	sort_case_3(t_stack *s)
{
	t_disco	*tmp;

	tmp = s->first;
//	while (!are_in_order(s))
//	printf("el valor mas grade es %d\n", biggest(s));
//	printf("el valor mas peque es %d\n", smallest(s));
//	printf("el valor de tmp-index %d\n", tmp->index);
	if (biggest(s) == tmp->index)
		rotate_a(s);
	else if (tmp->next->index == biggest(s))
 		rev_rotate_a(s);
	tmp = s->first;
	print_stack(s);
   if (!are_in_order(s) && tmp->next->index < tmp->index)
		swap_a(s);
	print_stack(s);
	/*while (!are_in_order(s))
	{
		printf("entra al while del sort 3\n");
		if (tmp->index == biggest(s))
			rotate_a(s);
		else if (tmp->next->index == biggest(s))
			rev_rotate_a(s);
		if (tmp->next->index < biggest(s))
			swap_a(s);
		//tmp = s->first;
	}*/
//	printf("Sale del while y termina sort 3\n");
}
