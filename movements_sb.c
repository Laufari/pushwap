/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_sb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:11:39 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 16:09:52 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_b(t_stack *b)
{
	t_disco	*tmp;

	if (b == NULL || b->first == NULL || b->first->next == NULL)
		return (1);
	tmp = b->first->next;
	b->first->next = tmp->next;
	tmp->next = b->first;
	b->first = tmp;
	write (1, "sb\n", 3);
	return (0);
}

int	push_a(t_stack *from, t_stack *to)
{
	t_disco	*tmp;

	if (from == NULL || from->first == NULL)
		return (1);
	tmp = from->first->next;
	from->first->next = to->first;
	to->first = from->first;
	from->first = tmp;
	from->len--;
	to->len++;
	write (1, "pa\n", 3);
	return (0);
}

int	rotate_b(t_stack *b)
{
	t_disco	*tmp;
	t_disco	*n_first;

	if (b == NULL || b->first == NULL)
		return (1);
	tmp = b->first;
	n_first = b->first->next;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = b->first;
	b->first->next = NULL;
	b->first = n_first;
	write (1, "rb\n", 3);
	return (0);
}

int	rev_rotate_b(t_stack *b)
{
	t_disco	*temp;
	t_disco	*last;

	if (b == NULL || b->first == NULL)
		return (1);
	temp = b->first;
	last = b->first;
	while (temp->next != NULL)
	{
		last = temp;
		temp = temp->next;
	}
	last->next = NULL;
	temp->next = b->first;
	b->first = temp;
	write (1, "rrb\n", 4);
	return (0);
}
