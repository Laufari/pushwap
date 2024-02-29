/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:12:37 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 16:20:20 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' )
		return (1);
	if (c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *s)
{
	int	i;
	int	rest;
	int	signo;

	i = 0;
	rest = 0;
	signo = 1;
	while (is_space(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signo = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		rest = rest * 10 + (s[i] - '0');
		i++;
	}
	rest = rest * signo;
	return (rest);
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (ptr1[i])
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	if (ptr1[i] != ptr2[i])
		return (ptr1[i] - ptr2[i]);
	return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_lstsize(t_stack *s)
{
	int		i;
	t_disco	*tmp;

	tmp = s->first;
	i = 0;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	s->len = i + 1;
	return (i);
}
