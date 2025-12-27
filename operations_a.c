/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledhajeid <khaledhajeid@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:24:43 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/27 03:08:44 by khaledhajei      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack **stack)
{
    t_stack *first;
    t_stack *second;

    if(!*stack || !(*stack)->next)
        return ;
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
    ft_printf("sa\n");
}

void ra(t_stack **stack)
{
    t_stack *first;
    t_stack *last;

    if(!*stack || !(*stack)->next)
        return ;
    first = *stack;
    *stack = first->next;
    first->next = NULL;
    last = *stack;
    while (last->next)
        last = last->next;
    last->next = first;
    ft_printf("ra\n");
}

void rra(t_stack **stack)
{
    t_stack *prev;
    t_stack *last;

    if(!*stack || !(*stack)->next)
        return ;
    last = *stack;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *stack;
    *stack = last;
    ft_printf("rra\n");
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current;

    if (!*stack_b)
        return;
    current = *stack_b;
    *stack_b = (*stack_b)->next;
    current->next = *stack_a;
    *stack_a = current;
    ft_printf("pa\n");
}