/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledhajeid <khaledhajeid@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 01:45:13 by khaledhajei       #+#    #+#             */
/*   Updated: 2025/12/27 03:11:18 by khaledhajei      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max_bits(t_stack *stack_a)
{
    int max;
    int bits;

    max = 0;
    bits = 0;
    while (stack_a)
    {
        if (stack_a->index > max)
            max = stack_a->index;
        stack_a = stack_a->next;
    }
    while ((max >> bits) != 0)
        bits++;
    return (bits);
}

void radix_sort(t_stack **stack_a, t_stack **stack_b)
{
    int i;
    int j;
    int size;
    int max_bits;

    size = stack_size(*stack_a);
    max_bits = get_max_bits(*stack_a);
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if (((*stack_a)->index >> i) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            j++;
        }
        while (*stack_b)
            pa(stack_a, stack_b);
        i++;
    }
}