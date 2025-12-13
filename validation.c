/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:23:17 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/12/13 17:37:24 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long ft_atol(char *nptr)
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
    int *numbers;
    long num;
    
    numbers = malloc((argc - 1) * sizeof(int));
    if (!numbers)
        return (0);
    i = 1;
    while(argv[i])
    {
        num = ft_atol(argv[i]);
        if(num >  2147483647 || num < -2147483648)
        {
            free(numbers);
            return (0);
        }
        numbers[i++ - 1] = num;
    }
    if(!check_dup(argc - 1, numbers))
    {
        free(numbers);
        return (0);
    }
    free(numbers);
    return (1);
}

int is_valid_number(char *s)
{
    int i;

    i = 0;
    if (!s[i])
        return (0);
    if (s[i] == '+' || s[i] == '-')
        i++;
    if (!ft_isdigit(s[i]))
        return (0);
    while (s[i])
    {
        if (!ft_isdigit(s[i]))
            return (0);
        i++;
    }
    return (1);
}

int check_is_valid(char **argv)
{
    int i;

    i = 1;
    while (argv[i])
    {
        if (!is_valid_number(argv[i]))
            return (0);
        i++;
    }
    return (1);
}
