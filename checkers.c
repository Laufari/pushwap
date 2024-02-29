/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:29:23 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/24 17:01:50 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arguments(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	if (are_not_daminit_enteros(argc, argv))
	{
		return (0);
	}
	if (is_there_some_dup_arg(argc, argv))
	{
		return (0);
	}
	if (not_max_or_min(argc, argv))
	{
		return (0);
	}
	return (1);
}
