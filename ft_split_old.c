/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_old.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:24:28 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/28 15:47:17 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_strlccpy(char *dst, const char *src, size_t dstsize)
{
	size_t		y;
	size_t		i;
	size_t		src_len;

	y = 0;
	i = 0;
	while (src[y] != '\0')
	{
		y++;
	}
	src_len = y;
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (src_len);
}

static size_t	ft_lens(const char *c, char b)
{
	size_t	i;

	i = 0;
	while (*c != '\0' && *c != b)
	{
		c++;
		i++;
	}
	return (i);
}

static int	countwords(const char *str, char c)
{
	int	wordcount;
	int	inword;

	wordcount = 0;
	inword = 0;
	while (*str != '\0')
	{
		if (*str != c && !inword)
		{
			inword = 1;
			wordcount++;
		}
		else if (*str == c && inword)
		{
			inword = 0;
		}
		str++;
	}
	return (wordcount);
}

static int	ft_malloc_check(char **arr, size_t i)
{
	int	temp;

	if (arr[i] == NULL)
	{
		temp = i;
		while (--temp >= 0)
			free(arr[temp]);
		free(arr);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		counter;
	char	**arr;
	size_t	p;

	p = 0;
	counter = countwords(s, c);
	i = 0;
	arr = (char **)malloc(sizeof(char *) * (counter + 1));
	if (arr == NULL)
		return (NULL);
	while (i < (size_t)counter)
	{
		while (s[p] == c)
			p++;
		arr[i] = (char *)malloc(sizeof(char) * (ft_lens(&s[p], c) + 1));
		if (!ft_malloc_check(arr, i))
			return (NULL);
		ft_strlccpy(arr[i], &s[p], ft_lens(&s[p], c) + 1);
		i++;
		while (s[p] != c && s[p])
			p++;
	}
	arr[i] = NULL;
	return (arr);
}
