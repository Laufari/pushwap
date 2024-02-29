/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:12:37 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 16:08:42 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	asign_index_to_disco(t_disco *node)
{
	t_disco	*first;
	t_disco	*temp;
	int		i;

	first = node;
	while (node)
	{
		i = 0;
		temp = first;
		while (temp)
		{
			if (temp->value < node->value)
				i++;
			temp = temp->next;
		}
		node->index = i;
		node = node->next;
	}
}

int	create_discos_and_insert_in_stack_a(t_stack *a, int argc, char **argv)
{
	t_disco	*tmp;
	t_disco	*new;
	int		j;
	int		is_first;

	j = 1;
	is_first = 1;
	while (j < argc)
	{
		new = malloc(sizeof(t_disco) * 1);
		if (!new)
			return (0);
		new->value = ft_atoi(argv[j]);
		if (is_first == 1)
		{
			a->first = new;
			is_first = 0;
		}
		else
			tmp->next = new;
		new->next = NULL;
		tmp = new;
		j++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a.first = NULL;
	b.first = NULL;
	a.len = 0;
	b.len = 0;
	if (argc < 2)
		return (0);
	if (check_arguments(argc, argv) == 0)
	{
		write (2, "Error\n", 6);
		return (0);
	}
	if (!create_discos_and_insert_in_stack_a(&a, argc, argv))
	{
		write (2, "Error\n", 6);
		return (0);
	}
	asign_index_to_disco(a.first);
	sort_stack(&a, &b);
	free_stack(&a);
	return (0);
}

void    free_stack(t_stack *a)
{
    t_disco *tmp;
    t_disco *begin;

    begin = a->first;
    while (begin)
    {
        tmp = begin;
        begin = begin->next;
        free(tmp);
    }
}
