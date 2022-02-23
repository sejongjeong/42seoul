/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 04:22:04 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 20:25:25 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	arg_size(unsigned long long int nbr)
{
	int	size;

	size = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		size++;
	}
	return (size);
}

static int	long_arg_p(unsigned long long int nbr)
{
	int		i;
	char	*num;

	i = 0;
	if (!nbr)
		return (putchar_so('0'));
	num = malloc((arg_size(nbr) + 1) * sizeof(char));
	if (!num)
		return (0);
	while (nbr)
	{
		num[i] = hexa_conv(nbr % 16, 'x');
		nbr /= 16;
		i++;
	}
	num[i] = '\0';
	revstr(num);
	ft_putstr_fd(num, 1);
	i = ft_strlen(num);
	free_ptr(&num);
	return (i);
}

int	arg_p(unsigned long long int addr)
{
	int	bytes;

	if (!addr)
	{
		ft_putstr_fd("0x0", 1);
		bytes = 3;
		return (bytes);
	}
	ft_putstr_fd("0x", 1);
	bytes = 2;
	bytes += long_arg_p(addr);
	return (bytes);
}
