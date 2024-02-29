/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:23:41 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 16:20:05 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_r(t_stack *a, t_stack *b, int i, int *current_bit)
{
	while (i > 0)
	{
		if (((a->first->index >> *current_bit) & 1) != 1)
		{
			push_b(a, b);
			a->len = a->len - 1;
		}
		else
			rotate_a(a);
		i--;
	}
	*current_bit = *current_bit + 1;
	b->len = ft_lstsize(b);
	while (b->len >= 0)
	{
		push_a(b, a);
	//	b->len--;
	//	a->len++;
	}
	i = a->len;
}

void	r_sort(t_stack *a, t_stack *b)
{
	int	bit_max;
	int	i;
	int	current_bit;

	i = a->len;
	current_bit = 0;
	bit_max = max_bit(a);
	while (current_bit <= bit_max)
	{
		sort_r(a, b, i, &current_bit);
	}
}
