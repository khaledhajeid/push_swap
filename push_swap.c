/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:17 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/13 17:40:46 by kal-haj-         ###   ########.fr       */
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
    if (argc < 2)
        return (0);
    if (!checks(argc, argv))
    {
        ft_printf("Error");
        return (1);
    }
    return (0);
}
