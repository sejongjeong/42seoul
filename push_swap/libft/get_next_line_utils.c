/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:12:32 by sejeong           #+#    #+#             */
/*   Updated: 2022/01/08 03:51:30 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (0);
		++s;
	}
	return ((char *)s);
}

size_t	ft_strlen(const char *s)
{
	const char	*sc = s;

	if (!s)
		return (0);
	while (*sc != 0)
		++sc;
	return (sc - s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (0);
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!result)
		return (0);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			result[i] = s1[i];
	while (s2[j] != '\0')
		result[i++] = s2[j++];
	result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (result);
}

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char		*tmp;
	const char	*s = src;

	if (!dest && !src)
		return (0);
	tmp = dest;
	while (count--)
		*tmp++ = *s++;
	return (dest);
}
