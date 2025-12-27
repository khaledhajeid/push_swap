/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaledhajeid <khaledhajeid@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:17 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/27 03:09:55 by khaledhajei      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_stack **stack)
{
    t_stack *tmp;

    while (*stack)
    {
        tmp = *stack;
        *stack = (*stack)->next;
        free(tmp);
    }
}

int checks(int argc, char **argv)
{
    if (!check_is_valid(argv))
        return (0);
    if (!check_overflow_and_dup(argc, argv))
        return (0);
    return (1);
}
int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    
    stack_a = NULL;
    stack_b = NULL;
    if (argc < 2)
        return (0);
    if (!checks(argc, argv))
    {
        ft_putstr_fd("Error\n", 2);
        return (1);
    }
    stack_a = create_stack(argv);
    if (!stack_a)
        return (1);
    assign_index(stack_a);
    sort(&stack_a, &stack_b);
    free_stack(&stack_a);
    return (0);
}
