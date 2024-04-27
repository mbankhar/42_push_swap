/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:32:42 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/27 17:38:46 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*getnumbers(char **argv, int *size_a)
{
	t_stack	size;
	char	**stacks;
	int		*convert;
	int		i;

	stacks = ft_split(argv[1], ' ');
	i = 0;
	while (stacks[i])
		i++;
	size.size = i;
	convert = malloc(sizeof(int) * (i - 1));
	i = -1;
	while (++i < size.size)
		convert[i] = ft_atoi(stacks[i]);
	i = -1;
	while (stacks[++i])
		free(stacks[i]);
	free(stacks);
	*size_a = size.size;
	return (convert);
}

int	*getnumbers2(int argc, char **argv, int *size_a)
{
	int		i;
	int		*convert;
	t_stack	size;

	i = 0;
	size.size = argc -1;
	convert = malloc(sizeof(int) * (size.size));
	i = 0;
	while (i < size.size)
	{
		convert[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	*size_a = size.size;
	return (convert);
}

int	checkforerror(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
			{
				printf("Error");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
	return (1);
}
// void  leaks(void)
// {
//   system("leaks push_swap");
// }
	// atexit(leaks);

int	main(int argc, char **argv)
{
	int				size_a;
	int				size_b;
	int				*array_a;
	int				*array_b;

	array_a = NULL;
	array_b = 0;
	size_a = 0;
	size_b = 0;
	if (argc < 2 || (argc == 2 && argv[1][0] == '\0'))
		return (0);
	else if (argc == 2)
		array_a = getnumbers(argv, &size_a);
	else if (argc > 2)
		array_a = getnumbers2(argc, argv, &size_a);
	if (checkforerror(array_a, size_a))
		array_b = get_array_b(array_b, size_a, &size_b);
	change_numbers(array_a, size_a);
	magichappenshere(array_a, array_b, size_a, size_b);
	free(array_b);
	free(array_a);
}
