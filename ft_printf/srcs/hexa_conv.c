/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 04:22:25 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 18:00:11 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	hexa_conv(char digit, char type)
{
	int	capital;

	capital = 0;
	if (type == 'X')
		capital = 32;
	if (digit > 9)
	{
		if (digit == 10)
			return ('a' - capital);
		if (digit == 11)
			return ('b' - capital);
		if (digit == 12)
			return ('c' - capital);
		if (digit == 13)
			return ('d' - capital);
		if (digit == 14)
			return ('e' - capital);
		if (digit == 15)
			return ('f' - capital);
	}
	else
		return (digit + '0');
	return (0);
}
