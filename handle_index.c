/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:48:49 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/15 18:07:44 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_size(t_stack *head)
{
    int i = 0;

    while (head)
    {
        i++;
        head = head->next;
    }
    return (i);
}
void    assign_index(t_stack *head)
{
    t_stack *current;
    t_stack *check;
    int     index;

    current = head;
    while (current)
    {
        index = 0;
        check = head;
        while (check)
        {
            if (check->value < current->value)
                index++;
            check = check->next;
        }
        current->index = index;
        current = current->next;
    }
}