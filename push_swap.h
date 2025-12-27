/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledhajeid <khaledhajeid@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:57 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/27 01:55:33 by khaledhajei      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
} t_stack;

int check_overflow_and_dup(int argc, char **argv);
int check_is_valid(char **argv);
t_stack *create_stack(char **argv);
long ft_atol(char *nptr);
void    assign_index(t_stack *head);
void sort(t_stack **stack, t_stack **stack_b);
void sa(t_stack **stack);
void ra(t_stack **stack);
void rra(t_stack **stack);
void pb(t_stack **stack_a, t_stack **stack_b);
void pa(t_stack **a, t_stack **b);
void sb(t_stack **stack);
int stack_size(t_stack *head);
void radix_sort(t_stack **stack_a, t_stack **stack_b);

#endif