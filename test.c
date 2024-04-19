/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:06:38 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/19 12:19:21 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  find_min_max(int **min, int **max, int size, int *array)
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
	printf("Minimum value: %d\n", **min);
    printf("Maximum value: %d\n", **max);
}

void	countingsort(int array[], int size)
{
  // Find the smallest and largest element of the array
	int	*min;
	int	*max;
	int	i;

	// min = &array[0];
	// max = &array[0];
	find_min_max(&min, &max, size, array);
	printf("Minimum value: %d\n", *min);
    printf("Maximum value: %d\n", *max);
}

// Function to print an array
void printArray(int array[], int size)
{
  int i = 0;
  while (i < size) {
    printf("%d  ", array[i]);
    i++;
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int n = argc - 1;
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Convert command-line arguments to integers and store in array
    int i = 0;
    while (i < n) {
        array[i] = atoi(argv[i + 1]);
        i++;
    }

    // Perform counting sort
    countingsort(array, n);

    // Print sorted array
    printArray(array, n);

    // Free dynamically allocated memory
    free(array);

    return 0;
}

