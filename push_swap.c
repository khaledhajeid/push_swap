/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:17 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/15 20:37:38 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    sort(&stack_a);
    return (0);
}
