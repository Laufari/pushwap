/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:13:15 by laufarin          #+#    #+#             */
/*   Updated: 2024/02/29 12:28:29 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

// PUSH_SWAP.C

typedef struct s_disco
{
	int				value;
	int				index;
	struct s_disco	*next;
}	t_disco;

typedef struct s_stack
{
	t_disco	*first;
	char	*nombre;
	int		len;
}	t_stack;

int		create_discos_and_insert_in_stack_a(t_stack *a, int argc, char **argv);
void	asign_index_to_disco(t_disco *a);
void    free_stack(t_stack *s);

// CHECKERS

int		check_arguments(int argc, char **argv);

// VALIDATIONS

int		is_there_some_dup_arg(int argc, char **argv);
int		are_not_daminit_enteros(int argc, char **argv);
int		check_string_num_not_max_or_min(char *stringnum);
int		is_the_string_a_int(char *s);
int		not_max_or_min(int argc, char **argv);

// VALIDATIONS_1

int		are_in_order(t_stack *a);

// UTILS

int		ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *s);
int		is_space(char c);
int		ft_lstsize(t_stack *a);

// UTILS_1

int		smallest(t_stack *s);
int		biggest(t_stack *s);
int		max_bit(t_stack *s);

// 	MOVEMENTS_SA

int		rev_rotate_a(t_stack *a);
int		rotate_a(t_stack *a);
int		swap_a(t_stack *a);
int		push_a(t_stack *from, t_stack *to);

// MOVEMENTS_SB

int		rev_rotate_b(t_stack *a);
int		rotate_b(t_stack *a);
int		swap_b(t_stack *a);
int		push_b(t_stack *from, t_stack *to);

// SORT_2_Y_3

void	sort_case_2(t_stack *s);
void	sort_case_3(t_stack *s);

// SORT_4

void	sort_case_4(t_stack *a, t_stack *b);

// SORT_5

void	sort_case_5(t_stack *a, t_stack *b);

// R_SORT

void	r_sort(t_stack *a, t_stack *b);

void	print_stack(t_stack *a);
void	sort_stack(t_stack *a, t_stack *b);
void	smallest_on_top(t_stack *a, int n);
#endif
