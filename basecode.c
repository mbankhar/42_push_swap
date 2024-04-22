/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basecode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 09:45:13 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/22 09:08:46 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 // Allocate memory for count array
int	*make_second_array(int range, int *array, int *min, int size)
{
	int	*count;
	int	i;

	i = 0;
	count = (int *)malloc(range * sizeof(int));
	if (count == 0)
		return (NULL);
	i = 0;
	while (i < range)
		count[i++] = 0;
	i = 0;
	while (i < size)
	{
		count[array[i] - *min]++;
		i++;
	}
	i = 1;
	while (i < range)
	{
		count[i] += count[i - 1];
		i++;
	}
	return (count);
}

/**
 * @brief Finds the minimum and maximum value.
 * 
 * @param min 
 * @param max 
 * @param size 
 * @param array 
 */
void	find_min_max(int **min, int **max, int size, int *array)
{
	int	i;

	i = 1;
	*min = &array[0];
	*max = &array[0];
	while (i < size)
	{
		if (array[i] < **min)
			*min = &array[i];
		if (array[i] > **max)
			*max = &array[i];
		i++;
	}
}

/**
 * @brief Uses counting sorth algorith
 * to sort the array.
 * 
 * @param array An array of integers;
 * @param The size of the Array;
 */
void	countingsort(int array[], int size)
{
	int	*min;
	int	*max;
	int	i;
	int	range;
	int	*count;

	find_min_max(&min, &max, size, array);
	range = *max - *min + 1;
	count = make_second_array(range, array, min, size);
	int *output = (int *)malloc(size * sizeof(int));
	if (output == NULL)
	{
		printf("Memory allocation failed\n");
		free(count);
		return ;
	}
	i = size -1;
	while (i >= 0)
	{
		output[count[array[i] - *min] - 1] = array[i];
		count[array[i] - *min]--;
		i--;
	}
	i = 0;
	while (i < size)
	{
		array[i] = output[i];
		i++;
	}
	free(count);
	free(output);
}

// Function to print an array
void	printArray(int array[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d  ", array[i]);
		i++;
	}
	printf("\n");
}

// // Driver code
// int	main(int argc, char *argv[])
// {
// 	int	n;
// 	int	i;
// 	int	*array;

// 	n = argc - 1;
// 	i = 0;
// 	if (argc < 2)
// 	{
// 		printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
// 		return (1);
// 	}
// 	array = (int *)malloc(n * sizeof(int));
// 	if (array == NULL)
// 		return (0);
// 	while (i < n)
// 	{
// 		array[i] = atoi(argv[i + 1]);
// 		i++;
// 	}
// 	countingsort(array, n);
// 	printArray(array, n);
// 	free(array);
// 	return (0);
// }
