/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:00:00 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/22 14:19:45 by mbankhar         ###   ########.fr       */
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
	// int				nbr;
	// int				index;
	// int				push_cost;
	// bool			above_median;
	// bool			cheapest;
}	t_stack;

int					ft_atoi(char *str);
char				**ft_split(char const *s, char c);
void				swap_a(int *array_a);
void	push_b(int *array_a, int *array_b, int *size_a, int *size_b);
void	push_a(int *array_a, int *array_b, int *size_a, int *size_b);
void	rotate_a(int *array_a, int size_a);
void	rotate_b(int *array_a, int size_b);
void	rotate_both(int *array_a, int *array_b, int size_a, int size_b);
void	reverse_rotate_a(int *array_a, int size_a);
void	reverse_rotate_b(int *array_b, int size_b);
void	reverse_rotate_both(int *array_a, int *array_b, int size_a, int size_b);

#endif