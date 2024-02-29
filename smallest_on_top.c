/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_on_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:51:20 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 12:58:22 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smallest_on_top(t_stack *a, int n)
{
	int		i;
	t_disco	*tmp;

	i = 0;
	tmp = a->first;
	while (tmp->index != n)
	{
		tmp = tmp->next;
		i++;

	}
	if (i < a->len / 2)
	{
		while (a->first->index != n)
			rotate_a(a);
	}
	else
	{
		while (a->first->index != n)
			rev_rotate_a(a);
	}
}

