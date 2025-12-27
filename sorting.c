/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledhajeid <khaledhajeid@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:12:33 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/27 03:11:07 by khaledhajei      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *stack_a)
{
    while (stack_a && stack_a->next)
    {
        if (stack_a->index > stack_a->next->index)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}

void sort_three(t_stack **stack)
{
    int a;
    int b;
    int c;

    a = (*stack)->index;
    b = (*stack)->next->index;
    c = (*stack)->next->next->index;
    if (a < b && b < c)
        return ;
    else if (a < b && b > c && c > a)
    {
        rra(stack);
        sa(stack);
    }
    else if (a > b && b < c && c > a)
        sa(stack);
    else if (a < b && b > c && c < a)
        rra(stack);
    else if (a > b && b < c && c < a)
        ra(stack);
    else if (a > b && b > c && c < a)
    {
        sa(stack);
        rra(stack);
    }
}

void sort_four(t_stack **stack_a, t_stack **stack_b)
{
    while ((*stack_a)->index != 0)
        ra(stack_a);
    pb(stack_a, stack_b);
    sort_three(stack_a);
    pa(stack_a, stack_b);
}

void sort_five(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    size = stack_size(*stack_a);
    while (size > 3)
    {
        if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
        {
            pb(stack_a, stack_b);
            size--;
        }
        else
            ra(stack_a);
    }
    sort_three(stack_a);
    if (*stack_b && (*stack_b)->next && (*stack_b)->index < (*stack_b)->next->index)
        sb(stack_b);
    pa(stack_a, stack_b);
    pa(stack_a, stack_b);
}

void sort(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    if (is_sorted(*stack_a))
        return ;
    size = stack_size(*stack_a);
    if (size == 2)
            sa(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size == 4)
        sort_four(stack_a, stack_b);
    else if (size == 5)
        sort_five(stack_a, stack_b);
    else
        radix_sort(stack_a, stack_b);
}
