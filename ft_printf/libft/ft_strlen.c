/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:40:39 by sejeong           #+#    #+#             */
/*   Updated: 2022/02/04 20:30:50 by sejeong          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	const char	*sc = s;

	while (*sc != 0)
		++sc;
	return (sc - s);
}
