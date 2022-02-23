/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:00:11 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 19:02:38 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

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

#endif