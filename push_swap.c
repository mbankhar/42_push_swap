/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:32:42 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/19 11:50:42 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void  find_min_max(int **min, int **max, int size, char array[])
{
	int	i;

	i = 1;
	while (i < size)
	{
	if (array[i] < *min)
		*min = &array[i];
	if (array[i] > *max)
		*max = &array[i];
	i++;
	}
}
#include "push_swap.h"

void	countingsort(int array[], int size)
{
  // Find the smallest and largest element of the array
	int	*min;
	int	*max;
	int	i;

	min = &array[0];
	max = &array[0];
	find_min_max(&min, &max, size, array);
	// i = 1;
	// while (i < size)
	// {
	// if (array[i] < min)
	// 	min = array[i];
	// if (array[i] > max)
	// 	max = array[i];
	// i++;
	// }
  
  int range = max - min + 1;

  // Allocate memory for count array
  int *count = (int *)malloc(range * sizeof(int));
  if (count == NULL) {
    printf("Memory allocation failed\n");
    return;
  }

  // Initialize count array with all zeros.
  i = 0;
  while (i < range) {
    count[i] = 0;
    i++;
  }

  // Store the count of each element
  i = 0;
  while (i < size) {
    count[array[i] - min]++;
    i++;
  }

  // Store the cumulative count of each array
  i = 1;
  while (i < range) {
    count[i] += count[i - 1];
    i++;
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  int *output = (int *)malloc(size * sizeof(int));
  if (output == NULL) {
    printf("Memory allocation failed\n");
    free(count);
    return;
  }

  i = size - 1;
  while (i >= 0) {
    output[count[array[i] - min] - 1] = array[i];
    count[array[i] - min]--;
    i--;
  }

  // Copy the sorted elements into original array
  i = 0;
  while (i < size) {
    array[i] = output[i];
    i++;
  }

  free(count);
  free(output);
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

// Driver code
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

