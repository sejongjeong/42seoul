/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 04:22:13 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 18:38:07 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_unsigned_nbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar_fd(nbr + 48, 1);
	else
	{
		put_unsigned_nbr(nbr / 10);
		put_unsigned_nbr(nbr % 10);
	}
}

int	arg_u(unsigned int nbr)
{
	put_unsigned_nbr(nbr);
	return (nbrlen(nbr));
}
