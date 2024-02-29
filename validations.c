/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:12:37 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/24 18:23:55 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_string_num_not_max_or_min(char *stringnum)
{
	if (stringnum[0] == '-')
	{
		if (ft_strlen(stringnum) > 11)
			return (1);
		if (ft_strlen(stringnum) < 11)
			return (0);
		if (ft_strcmp(stringnum, "-2147483648") <= 0)
			return (0);
	}
	else
	{
		if (ft_strlen(stringnum) > 10)
			return (1);
		if (ft_strlen(stringnum) < 10)
			return (0);
		if (ft_strcmp(stringnum, "2147483647") <= 0)
			return (0);
	}
	return (0);
}

int	not_max_or_min(int argc, char **argv)
{
	int		j;
	int		pos;
	char	*stringnum;

	j = 1;
	while (j < argc && argv[j])
	{
		pos = 0;
		stringnum = argv[j];
		if (ft_strlen(stringnum) > 1)
		{
			while (stringnum[pos] == '0')
				pos++;
		}
		if (check_string_num_not_max_or_min(&stringnum[pos]) == 1)
			return (1);
		j++;
	}
	return (0);
}

int	is_the_string_a_int(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '\0')
	{
		return (0);
		i++;
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	if (s[0] == '-' && ft_strlen(s) > 1)
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	are_not_daminit_enteros(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!is_the_string_a_int(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_there_some_dup_arg(int argc, char **argv)
{
	char	*to_compare;
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		to_compare = argv[i];
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(to_compare) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
