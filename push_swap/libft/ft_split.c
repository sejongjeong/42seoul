/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 10:44:56 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/04 20:28:03 by sejeong          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ck_size(char const *s, char c)
{
	size_t	as;

	as = 0;
	while (*s)
	{
		if (*s != c)
		{
			as++;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (as);
}

static void	strsecpy(char *dest, char *start, char *end)
{
	while (start < end)
		*dest++ = *start++;
	*dest = 0;
}

static char	**free_mem(char **arr)
{
	size_t	idx;

	idx = 0;
	while (arr[idx])
		free(arr[idx++]);
	free(arr);
	return (0);
}

static char	**ft_split_helper(char const *s, char c, char **res)
{
	char	*start;
	size_t	idx;

	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				++s;
			res[idx] = malloc(s - start + 1);
			if (!res[idx])
				return (free_mem(res));
			strsecpy(res[idx++], start, (char *)s);
		}
		else
			++s;
	}
	res[idx] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	l;

	l = ck_size(s, c);
	res = malloc(sizeof(char *) * (l + 1));
	if (!res)
		return (0);
	ft_split_helper(s, c, res);
	return (res);
}
