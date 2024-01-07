/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:13:15 by laufarin          #+#    #+#             */
/*   Updated: 2024/01/05 20:20:52 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
 #define PUSH_SWAP_H

#include "unistd.h"
#include "stdio.h"
#include "limits.h"


// -1000 6 4444 5
// 1     3   4  2

typdef struct s_disco
{	
	int value;
	int indice;
	struct s_disco *next;
} t_disco;


typdef struct s_stack
{
	t_disco *first;
	char *nombre;
	int 	 len;
} t_stack;


int check_arguments(int argc, char **argv);
int ft_strlen(char *s);
int ft_strcmp(char *s1, char *s2);
int	not_max_or_min(int argc, char **argv);
int	ft_atoi(char *s);
int	is_space(char c);
int create_discos_and_insert_in_stack_a(t_stack *a, int argc, char **argv);

#endif
