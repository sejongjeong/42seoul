/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:45:56 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/04 20:45:26 by sejeong          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		arg_c(char c);
int		arg_p(unsigned long long int addr);
int		arg_per(void);
int		arg_s(char *str);
int		arg_u(unsigned int nbr);
int		args_d_i(int nbr);
int		args_x(unsigned int nbr, char type);
int		ft_printf(const char *str, ...);
char	hexa_conv(char digit, char type);
void	free_ptr(char **ptr);
int		putchar_so(char c);
int		nbrlen(long int nbr);
char	*revstr(char *str);
int		is_arg(char a);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dest, const void *src, size_t count);
char	*read_from_buffer(int fd, char *str);
char	*get_line(char *str);
char	*free_up(char *str);
char	*get_next_line(int fd);

#endif
