/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:12:33 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/15 20:39:58 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void sort(t_stack **stack)
{
    sort_three(stack);
}
