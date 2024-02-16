/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:13:15 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/16 16:03:13 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
 #define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


// -1000 6 4444 5
// 1     3   4  2

typedef struct s_disco
{	
	int value;
	int index;
	struct s_disco *next;
} t_disco;

typedef struct s_stack
{
	t_disco *first;
	char *nombre;
	int 	 len;
} t_stack;

void	asign_index_to_disco(t_stack *a,  t_disco *node);
int		check_arguments(int argc, char **argv);
int		ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
int		not_max_or_min(int argc, char **argv);
int		ft_atoi(char *s);
int		is_space(char c);
int		create_discos_and_insert_in_stack_a(t_stack *a, int argc, char **argv);
int		rev_rotate(t_stack *a);
int		rotate(t_stack *a);
int		swap(t_stack *a);
int		push(t_stack *from, t_stack *to);
int		are_in_order(t_stack *a);
int		ft_lstsize(t_stack *a);
int		biggest(t_stack *s);
int		smallest(t_stack *s);
void	sort_case_2(t_stack *s);
void	sort_case_3(t_stack *s);
void	sort_case_4(t_stack *a, t_stack *b);
void    sort_case_5(t_stack *a, t_stack *b);
#endif
