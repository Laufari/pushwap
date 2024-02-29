/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:52:34 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/24 17:02:37 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a)
{
	t_disco	*tmp;

	tmp = a->first;
	printf("Debug list\n");
	while (tmp)
	{
		printf("value: %d\tindex: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
}
