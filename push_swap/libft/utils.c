/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 04:22:20 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 18:00:35 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_ptr(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

int	putchar_so(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	nbrlen(long int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*revstr(char *str)
{
	int	st;
	int	fin;

	st = 0;
	fin = ft_strlen(str) - 1;
	while (st < fin - st)
	{
		str[st] = str[st] ^ str[fin - st];
		str[fin - st] = str[st] ^ str[fin - st];
		str[st] = str[st] ^ str[fin - st];
		st++;
	}
	return (str);
}

int	is_arg(char a)
{
	return (a == 'c' || a == 'd' || a == 'i' || a == 'p' || a == 'f'
		|| a == 's' || a == 'x' || a == 'X' || a == 'u' || a == '%');
}
