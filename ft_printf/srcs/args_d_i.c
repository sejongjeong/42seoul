/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_d_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 04:22:15 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/09 12:09:00 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int nbr)
{
	ft_putnbr_fd(nbr, 1);
}

int	args_d_i(int nbr)
{
	ft_putnbr(nbr);
	return (nbrlen(nbr));
}
