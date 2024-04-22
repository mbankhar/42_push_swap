/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:50:52 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/22 16:18:53 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(int *array_a, int size_a)
{
	int	i;
	int	temp;

	i = size_a;
	temp = array_a[size_a - 1];
	while (i > 0)
	{
		array_a[i - 1] = array_a[i - 2];
		i--;
	}
	array_a[0] = temp;
	printf("rra\n");
}

void	reverse_rotate_b(int *array_b, int size_b)
{
	int	i;
	int	temp;

	i = size_b;
	temp = array_b[size_b - 1];
	while (i > 0)
	{
		array_b[i -1] = array_b[i - 2];
		i--;
	}
	array_b[0] = temp;
	printf("rrb\n");
}

void	reverse_rotate_ab(int *array_a, int *array_b, int size_a, int size_b)
{
	int	i;
	int	temp;

	i = size_a;
	temp = array_a[size_a - 1];
	while (i > 0)
	{
		array_a[i - 1] = array_a[i - 2];
		i--;
	}
	array_a[0] = temp;
	i = size_b;
	temp = array_b[size_b - 1];
	while (i > 0)
	{
		array_b[i -1] = array_b[i - 2];
		i--;
	}
	array_b[0] = temp;
	printf("rrr\n");
}



