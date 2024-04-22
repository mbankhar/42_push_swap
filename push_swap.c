/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:32:42 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/22 09:24:19 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*getnumbers(int argc, char **argv, int *sizeofinput)
{
	t_stack	size;
	char	**stacks;
	int		*convert;
	int		i;
	int		*array;

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
	*sizeofinput = size.size;
	return (convert);
}

int	*getnumbers2(int argc, char **argv, int *sizeofinput)
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
	*sizeofinput = size.size;
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

int	main(int argc, char **argv)
{
	int				i;
	int				sizeofinput;
	int				*array_a;
	int				array_b[20] = {3, 17, 18};
	int				y;

	printf("%d\n", (int)ft_strlen("test"));
	if (argc < 2 || argc == 2 && argv[1][0] == '\0')
		return (0);
	else if (argc == 2)
		array_a = getnumbers(argc, argv, &sizeofinput);
	else if (argc > 2)
		array_a = getnumbers2(argc, argv, &sizeofinput);
	if (checkforerror(array_a, sizeofinput))
	i = -1;
	while (++i < sizeofinput)
	{
		printf("%d\n", array_a[i]);
	}
	swap_a(array_a);
	i = -1;
	while (++i < sizeofinput)
	{
		printf("%d\n", array_a[i]);
	}
	i = -1;
	while (++i < 3)
	{
		printf("%d\n", array_b[i]);
	}
	y = 3;
	push_b(array_a, array_b, &sizeofinput, &y);
	printf("operation happened here\n");
	printf("array_a\n");
	i = -1;
	while (++i < sizeofinput)
	{
		printf("%d\n", array_a[i]);
	}
	printf("array_b\n");
	i = -1;
	while (++i < 4)
	{
		printf("%d\n", array_b[i]);
	}
	push_a(array_a, array_b, &sizeofinput, &y);
	printf("array_a\n");
	i = -1;
	while (++i < sizeofinput)
	{
		printf("%d\n", array_a[i]);
	}
	printf("array_b\n");
	i = -1;
	while (++i < 4)
	{
		printf("%d\n", array_b[i]);
	}
}
