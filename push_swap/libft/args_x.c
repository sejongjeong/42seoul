/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 04:22:17 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 18:35:00 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	arg_size(unsigned int nbr)
{
	int		size;

	size = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		size++;
	}
	return (size);
}

int	args_x(unsigned int nbr, char type)
{
	int		i;
	int		size;
	char	*num;

	i = 0;
	if (!nbr)
		return (putchar_so('0'));
	num = malloc((arg_size(nbr) + 1) * sizeof(char));
	if (!num)
		return (0);
	while (nbr)
	{
		num[i] = hexa_conv(nbr % 16, type);
		nbr /= 16;
		i++;
	}
	num[i] = '\0';
	revstr(num);
	ft_putstr_fd(num, 1);
	size = ft_strlen(num);
	free_ptr(&num);
	return (size);
}
