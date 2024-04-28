/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:47:28 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/28 10:00:04 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	change_numbers(int *array_a, int size_a)
{
	int	*sorted_array;
	int	i;
	int	j;
	int	temp;

	sorted_array = malloc(sizeof(int) * size_a);
	i = -1;
	while (++i < size_a)
		sorted_array[i] = array_a[i];
	i = -1;
	while (++i < size_a - 1)
	{
		j = i;
		while (++j < size_a)
		{
			if (sorted_array[i] > sorted_array[j])
			{
				temp = sorted_array[i];
				sorted_array[i] = sorted_array[j];
				sorted_array[j] = temp;
			}
		}
	}
	change_numbersparttwo(array_a, sorted_array, size_a);
}

void	change_numbersparttwo(int *array_a, int *sorted_array, int size_a)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size_a)
	{
		j = -1;
		while (++j < size_a)
		{
			if (array_a[i] == sorted_array[j])
			{
				array_a[i] = j + 1;
				break ;
			}
		}
	}
	free(sorted_array);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
