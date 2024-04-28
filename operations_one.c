/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:13:53 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/28 15:29:03 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(int *array_a)
{
	int	temp;

	if (array_a[0] == '\0' || array_a[1] == '\0')
	{
		ft_putendl_fd("Error", 2);
	}
	temp = array_a[0];
	array_a[0] = array_a[1];
	array_a[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(int *array_b)
{
	int	temp;

	if (array_b[0] == '\0' || array_b[1] == '\0')
	{
		ft_putendl_fd("Error", 2);
	}
	temp = array_b[0];
	array_b[0] = array_b[1];
	array_b[1] = temp;
	write(1, "sb\n", 3);
}

void	swapboth(int *array_a, int *array_b)
{
	int	temp;

	if (array_a[0] == '\0' || array_a[1] == '\0')
	{
		ft_putendl_fd("Error", 2);
	}
	temp = array_a[0];
	array_a[0] = array_a[1];
	array_a[1] = temp;
	if (array_b[0] == '\0' || array_b[1] == '\0')
	{
		ft_putendl_fd("Error", 2);
	}
	temp = array_b[0];
	array_b[0] = array_b[1];
	array_b[1] = temp;
	write(1, "ss\n", 3);
}

void	push_a(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	i;

	i = *size_a;
	if (size_b != 0)
	{
		while (i > 0)
		{
			array_a[i] = array_a[i - 1];
			i--;
		}
		array_a[0] = array_b[0];
		(*size_a)++;
		i = 0;
		while (i < *size_b)
		{
			array_b[i] = array_b[i + 1];
			i++;
		}
		(*size_b)--;
	}
	write(1, "pa\n", 3);
}

void	push_b(int *array_a, int *array_b, int *size_a, int *size_b)
{
	int	i;

	i = *size_b;
	if (size_a != 0)
	{
		while (i > 0)
		{
			array_b[i] = array_b[i - 1];
			i--;
		}
		array_b[0] = array_a[0];
		(*size_b)++;
		i = 0;
		while (i < *size_a)
		{
			array_a[i] = array_a[i + 1];
			i++;
		}
		(*size_a)--;
	}
	write(1, "pb\n", 3);
}
