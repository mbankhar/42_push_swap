/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:49:24 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/28 15:30:28 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(int *array_a, int size_a)
{
	int	i;
	int	temp;

	i = 1;
	temp = array_a[0];
	while (i < size_a)
	{
		array_a[i - 1] = array_a[i];
		i++;
	}
	array_a[size_a - 1] = temp;
	write(1, "ra\n", 3);
}

void	rotate_b(int *array_b, int size_b)
{
	int	i;
	int	temp;

	i = 1;
	temp = array_b[0];
	while (i < size_b)
	{
		array_b[i -1] = array_b[i];
		i++;
	}
	array_b[size_b - 1] = temp;
	write(1, "rb\n", 3);
}

void	rotate_both(int *array_a, int *array_b, int size_a, int size_b)
{
	int	i;
	int	temp;

	i = 1;
	temp = array_a[0];
	while (i < size_a)
	{
		array_a[i - 1] = array_a[i];
		i++;
	}
	array_a[size_a - 1] = temp;
	i = 1;
	temp = array_b[0];
	while (i < size_b)
	{
		array_b[i -1] = array_b[i];
		i++;
	}
	array_b[size_b - 1] = temp;
	write(1, "rr\n", 3);
}
