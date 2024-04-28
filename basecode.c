/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basecode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 09:45:13 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/28 15:23:41 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int	*array_a, int size_a)
{
	while (!sort(array_a, size_a))
	{
		if (array_a[0] > array_a[1] && array_a[1] < array_a[2])
			swap_a(array_a);
		else if (array_a[0] > array_a[1])
			swap_a(array_a);
		else if (!sort(array_a, size_a))
			reverse_rotate_a(array_a, size_a);
	}
}

void	sortfive(int *array_a, int *array_b, int size_a, int size_b)
{
	int	i;

	i = 1;
	while (size_a > 3)
	{
		while (array_a[0] != i)
		{
			if (i == array_a[size_a -1])
				reverse_rotate_a(array_a, size_a);
			else
				rotate_a(array_a, size_a);
		}
		push_b(array_a, array_b, &size_a, &size_b);
		i++;
	}
	sort_three(array_a, size_a);
	push_a(array_a, array_b, &size_a, &size_b);
	push_a(array_a, array_b, &size_a, &size_b);
}

void	sortthere(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	i;
	int	range;
	int	j;

	j = 0;
	i = 0;
	range = ft_range(size_a) * 14 / 10;
	while (*size_a > 0)
	{
		if (array_a[i] - 1 <= j)
		{
			push_b(array_a, array_b, size_a, size_b);
			rotate_b(array_b, *size_b);
			j++;
		}
		else if (array_a[i] - 1 <= j + range)
		{
			push_b(array_a, array_b, size_a, size_b);
			j++;
		}
		else
			rotate_a(array_a, *size_a);
	}
}

void	sortback(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	rb_count;
	int	rrb_count;
	int	i;
	int	j;

	i = 0;
	while (*size_b > 0)
	{
		rb_count = count_r(array_b, *size_b - 1);
		rrb_count = (*size_b + 3) - rb_count;
		j = 0;
		if (rb_count <= rrb_count)
		{
			while (array_b[j] -1 != *size_b - 1)
				rotate_b(array_b, *size_b);
			push_a(array_a, array_b, size_a, size_b);
		}
		else
		{
			while (array_b[j] - 1 != *size_b - 1)
				reverse_rotate_b(array_b, *size_b);
			push_a(array_a, array_b, size_a, size_b);
		}
	}
}

void	magichappenshere(int *array_a, int *array_b, int size_a, int size_b)
{
	if (sort(array_a, size_a))
		exit(EXIT_SUCCESS);
	else if (size_a == 2 && !sort(array_a, size_a))
		swap_a(array_a);
	else if (size_a == 3 && !sort(array_a, size_a))
		sort_three(array_a, size_a);
	else if (size_a <= 5)
		sortfive(array_a, array_b, size_a, size_b);
	else
	{
		sortthere(array_a, array_b, &size_a, &size_b);
		sortback(array_a, array_b, &size_a, &size_b);
	}
}
