/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:12:32 by sejeong           #+#    #+#             */
/*   Updated: 2022/01/06 15:27:19 by sejeong          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
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

	while (*sc != 0)
		++sc;
	return (sc - s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*tmp;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(s1_len + s2_len + 1);
	if (!result)
		return (0);
	tmp = result;
	while (s1_len--)
		*tmp++ = *s1++;
	while (s2_len--)
		*tmp++ = *s2++;
	*tmp = '\0';
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
