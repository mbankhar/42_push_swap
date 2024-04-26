/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:27:28 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/26 14:20:47 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	findminmax(int *arr, int size, int *min, int *max)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
		i++;
	}
}

int	sort(int *array_a, int size_a)
{
	int	i;

	i = 0;
	while (i < size_a - 1)
	{
		if (array_a[i] > array_a[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	isreversesorted(int *array_a, int size_a)
{
	int	i;

	i = 0;
	while (i < size_a - 1)
	{
		if (array_a[i] < array_a[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_sqrt(int *nbr)
{
	int	i;

	i = 1;
	while (i * i != *nbr && i < *nbr / 2)
		i++;
	return (i);
}

int	count_r(int	*array_a, int size_a)
{
	int	i;

	i = 0;
	while (i <= size_a - 1 && array_a[i] - 1 != size_a)
	{
		i++;
	}
	return (i);
}
