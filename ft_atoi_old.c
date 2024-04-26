/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_old.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:22:53 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/26 15:08:40 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long int	result;

	result = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (str[i] != '\0' || result > INT_MAX || (result * sign) < INT_MIN)
	{
		printf("Error");
		exit(EXIT_FAILURE);
	}
	return (result * sign);
}

int	*get_array_b(int *array_b, int size_a, int *size_b)
{
	array_b = malloc(sizeof(int) * size_a);
	*size_b = 0;
	return (array_b);
}
