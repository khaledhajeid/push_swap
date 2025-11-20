/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:23:17 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/11/20 18:38:18 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_atol(char *nptr)
{
	int	sign;
	int	i;
	long	out;

	i = 0;
	out = 0;
	sign = 1;
	while (ft_space(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		out = out * 10 + (nptr[i] - '0');
		i++;
	}   
	return (out * sign);
}
int check_dup(int num_index, int *numbers)
{
    int i;
    int j;

    i = 0;
    while (i < num_index)
    {
        j = 0;
        while (j < num_index)
        {
            if (numbers[i] == numbers[j] && i != j)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int check_overflow_and_dup(int argc, char **argv)
{
    int i;
    int numbers[argc - 1];
    long num;
    
    i = 1;
    while(argv[i])
    {
        num = atol(argv[i]);
        if(num >  2147483647 || num < -2147483648)
            return (0);
        numbers[i - 1] = num;
        i++;
    }
    if(!check_dup(argc - 1, numbers))
        return (0);
    return (1);
}

int checks(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc < 2)
        return (0);
    while(argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
                return (0);
            j++;
        }
        i++;
    }
    if (!check_overflow_and_dup(argc, argv))
        return (0);
    return (1);
}
