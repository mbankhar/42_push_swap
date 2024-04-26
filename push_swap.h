/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:00:00 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/26 16:56:42 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				size;

}	t_stack;

void	change_numbers(int *array_a, int size_a);
void	change_numbersparttwo(int *array_a, int *sorted_array, int size_a);
int		ft_atoi(char *str);
char	**ft_split(char const *s, char c);
void	swap_a(int *array_a);
void	swap_b(int *array_b);
int		*getnumbers(char **argv, int *size_a);
int		*getnumbers2(int argc, char **argv, int *size_a);
int		checkforerror(int *array, int size);
int		*get_array_b(int *array_b, int size_a, int *size_b);
void	swapboth(int *array_a, int *array_b);
int		sort(int *array_a, int size_a);
void	push_b(int *array_a, int *array_b, int *size_a, int *size_b);
void	push_a(int *array_a, int *array_b, int *size_a, int *size_b);
void	rotate_a(int *array_a, int size_a);
void	rotate_b(int *array_a, int size_b);
void	rotate_both(int *array_a, int *array_b, int size_a, int size_b);
void	reverse_rotate_a(int *array_a, int size_a);
void	reverse_rotate_b(int *array_b, int size_b);
void	reverse_rotate_ab(int *array_a, int *array_b, int size_a, int size_b);
void	magichappenshere(int *array_a, int *array_b, int size_a, int size_b);
void	findminmax(int *arr, int size, int *min, int *max);
int		isreversesorted(int *array_a, int size_a);
int		ft_range(int *nbr);
int		count_r(int	*array_a, int size_a);

#endif