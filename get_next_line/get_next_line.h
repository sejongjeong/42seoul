/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:12:34 by sejeong           #+#    #+#             */
/*   Updated: 2022/01/08 03:51:28 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dest, const void *src, size_t count);
char	*read_from_buffer(int fd, char *str);
char	*get_line(char *str);
char	*free_up(char *str);
char	*get_next_line(int fd);

#endif