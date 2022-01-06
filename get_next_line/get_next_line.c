/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:06:57 by sejeong           #+#    #+#             */
/*   Updated: 2022/01/06 12:57:42 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*read_from_buffer(int fd, char *str)
{
	char	*buffer;
	size_t	num_read;

	num_read = -1;
	buffer = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buffer)
		return (0);
	while (!ft_strchr(str, '\n') && num_read != 0)
	{
		num_read = read(fd, buffer, BUFFER_SIZE);
		if (num_read == -1)
		{
			free(buffer);
			return (0);
		}
		buffer[num_read] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_line(char *str)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(i * sizeof(char) + 2);
	if (!line)
		return (0);
	ft_memcpy(line, str, sizeof(char) * i);
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = read_from_buffer(fd, str);
	if (!str)
		return (0);
	while (true)
	{
		
	}
	
}
