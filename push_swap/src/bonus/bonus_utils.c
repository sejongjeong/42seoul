/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:34:11 by sejeong           #+#    #+#             */
/*   Updated: 2022/03/03 03:34:11 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include <stdlib.h>

int	ft_check_opt(char *opt, t_stacks *stack)
{
	if (ft_strcmp(opt, "sa\n") || ft_strcmp(opt, "sb\n")
		|| ft_strcmp(opt, "ss\n") || ft_strcmp(opt, "ra\n")
		|| ft_strcmp(opt, "rb\n") || ft_strcmp(opt, "rra\n")
		|| ft_strcmp(opt, "rrb\n") || ft_strcmp(opt, "rrr\n")
		|| ft_strcmp(opt, "pa\n") || ft_strcmp(opt, "pb\n")
		|| ft_strcmp(opt, "rr\n"))
		return (1);
	else if (!opt
		&& ft_check_sorted(stack->a, stack->size_a, ASCENDING))
	{		
		ft_printf("\033[0;32mOK\n");
		return (0);
	}
	else
	{
		ft_printf("Error\n");
		return (0);
	}
}

void	ft_opt(t_stacks *stack, char *opt)
{
	if (ft_strcmp(opt, "sa\n"))
		ft_sa(stack, STACK);
	else if (ft_strcmp(opt, "sb\n"))
		ft_sb(stack, STACK);
	else if (ft_strcmp(opt, "ss\n"))
		ft_ss(stack, STACK);
	else if (ft_strcmp(opt, "ra\n"))
		ft_ra(stack, STACK);
	else if (ft_strcmp(opt, "rb\n"))
		ft_rb(stack, STACK);
	else if (ft_strcmp(opt, "rr\n"))
		ft_rr(stack, STACK);
	else if (ft_strcmp(opt, "rra\n"))
		ft_rra(stack, STACK);
	else if (ft_strcmp(opt, "rrb\n"))
		ft_rrb(stack, STACK);
	else if (ft_strcmp(opt, "rrr\n"))
		ft_rrr(stack, STACK);
	else if (ft_strcmp(opt, "pa\n"))
		ft_pa(stack, STACK);
	else if (ft_strcmp(opt, "pb\n"))
		ft_pb(stack, STACK);
}
