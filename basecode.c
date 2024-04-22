/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basecode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 09:45:13 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/22 17:30:26 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void findminmax(int *arr, int size, int *min, int *max)
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

int	issorted(int *array_a, int size_a)
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

void	sort_three(int	*array_a, int size_a)
{
	int	min;
	int	max;

	min = array_a[0];
	max = array_a[0];
	findminmax(array_a, size_a, &min, &max);
	if (array_a[0] == min)
	{
		reverse_rotate_a(array_a, size_a);
		swap_a(array_a);
	}
	else if (array_a[1] == min && array_a[2] == max)
		swap_a(array_a);
	else if (array_a[2] == min && array_a[1] == max)
		reverse_rotate_a(array_a, size_a);
	else if (array_a[2] == min && array_a[0] == max)
	{
		reverse_rotate_a(array_a, size_a);
		reverse_rotate_a(array_a, size_a);
	}
	else if (array_a[1] == min && array_a[0] == max)
		rotate_a(array_a, size_a);
}


void	magichappenshere(int *array_a, int *array_b, int size_a, int size_b)
{
	if (!issorted(array_a, size_a))
	{
		if (size_a == 2 && !issorted(array_a, size_a))
			swap_a(array_a);
		else if (size_a == 3 && !issorted(array_a, size_a))
			sort_three(array_a, size_a);
		else
		{
			
		}
	}
}
