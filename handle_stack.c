/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:14:49 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/14 19:44:20 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_node(int value)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if (!node)
        return (NULL);
    node->value = value;
    node->index = -1;
    node->next = NULL;
    return (node);
}

void stack_add_back(t_stack **stack, t_stack *new)
{
    t_stack *current;

    if (!stack || !new)
        return;
    if (!*stack)
    {
        *stack = new;
        return;
    }
    current = *stack;
    while (current->next)
        current = current->next;
    current->next = new;
}

t_stack *create_stack(char **argv)
{
    t_stack *stack_a;
    int i;
    int value;
    t_stack *node;

    stack_a = NULL;
    i = 1;
    while (argv[i])
    {
        value = ft_atol(argv[i]);
        node = new_node(value);
        if (!node)
            return (NULL);
        stack_add_back(&stack_a, node);
        i++;
    }
    return (stack_a);
}