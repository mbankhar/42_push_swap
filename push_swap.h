/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:00:00 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/22 09:23:50 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	// int				top;
	// unsigned int	capacity;
	int				size;
	// int				*ar_a;
	// int				size_b;
	// int				*ar_b;
} t_stack;

// int					ft_atoi(char *str);
// char				**ft_split(char const *s, char c);
void				swap_a(int *array_a);
void	push_b(int *array_a, int *array_b, int *size_a, int *size_b);
void	push_a(int *array_a, int *array_b, int *size_a, int *size_b);

#endif