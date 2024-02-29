/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:13:27 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 16:44:00 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bit(t_stack *s)
{
	int	bit_max;
	int	max;

	bit_max = 31;
	max = biggest(s);
	while ((max >> bit_max & 1) != 1)
	{
		bit_max--;
	}
	return (bit_max);
}

int	biggest(t_stack *s)
{
	t_disco	*tmp;
	int		max;

	tmp = s->first;
	max = tmp->index;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->index > max)
			max = tmp->index;
	}
	return (max);
}

int	smallest(t_stack *s)
{
	t_disco	*tmp;
	int		min;

	tmp = s->first;
	min = tmp->index;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->index < min)
			min = tmp->index;
	}
	return (min);
}
