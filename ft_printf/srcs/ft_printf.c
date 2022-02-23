/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 09:00:11 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 18:37:45 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_arguments(va_list arg, char c)
{
	int	bytes;

	bytes = 0;
	if (c == '%')
		bytes += arg_per();
	if (c == 'c')
		bytes += arg_c(va_arg(arg, int));
	if (c == 's')
		bytes += arg_s(va_arg(arg, char *));
	if (c == 'p')
		bytes += arg_p(va_arg(arg, unsigned long long int));
	if (c == 'd' || c == 'i')
		bytes += args_d_i(va_arg(arg, int));
	if (c == 'u')
		bytes += arg_u(va_arg(arg, int));
	if (c == 'x' || c == 'X')
		bytes += args_x(va_arg(arg, unsigned int), c);
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		bytes;
	char	c;

	i = 0;
	bytes = 0;
	va_start(arg, str);
	while (str[i])
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			bytes += check_arguments(arg, c);
			i++;
		}
		else
			bytes += putchar_so(str[i]);
		i++;
	}
	va_end(arg);
	return (bytes);
}
