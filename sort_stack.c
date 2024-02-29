/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:20:39 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 17:01:43 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack *a, t_stack *b)
{
	if (!are_in_order(a))
	{
		ft_lstsize(a);
		if (a->len == 2)
			sort_case_2(a);
		if (a->len == 3)
			sort_case_3(a);
	//	if (a->len == 4)
			//sort_case_4(a, b);
		else if (a->len == 4 || a->len == 5)
			sort_case_5(a, b);
		else if (a->len > 5)
			r_sort(a, b);
	}
}
