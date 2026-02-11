/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledhajeid <khaledhajeid@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 03:07:39 by khaledhajei       #+#    #+#             */
/*   Updated: 2025/12/27 03:08:40 by khaledhajei      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current;

    if (!*stack_a)
        return;
    current = *stack_a;
    *stack_a = (*stack_a)->next;
    current->next = *stack_b;
    *stack_b = current;
    ft_printf("pb\n");
}
void sb(t_stack **stack)
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
    ft_printf("sb\n");
}