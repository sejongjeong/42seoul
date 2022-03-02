/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:08:35 by sejeong           #+#    #+#             */
/*   Updated: 2022/03/03 00:07:56 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_opt(char *opt, t_stacks *stack)
{
	if (ft_strcmp(opt, "sa\n") || ft_strcmp(opt, "sb\n")
		|| ft_strcmp(opt, "ss\n") || ft_strcmp(opt, "ra\n")
		|| ft_strcmp(opt, "rb\n") || ft_strcmp(opt, "rra\n")
		|| ft_strcmp(opt, "rrb\n") || ft_strcmp(opt, "rrr\n")
		|| ft_strcmp(opt, "pa\n") || ft_strcmp(opt, "pb\n")
		|| ft_strcmp(opt, "rr\n"))
		return (1);
	else if (!opt
		&& check_sorted(stack->a, stack->size_a, ASCENDING))
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

void	opt(t_stacks *stack, char *opt)
{
	if (ft_strcmp(opt, "sa\n"))
		sa(stack, STACK);
	else if (ft_strcmp(opt, "sb\n"))
		sb(stack, STACK);
	else if (ft_strcmp(opt, "ss\n"))
		ss(stack, STACK);
	else if (ft_strcmp(opt, "ra\n"))
		ra(stack, STACK);
	else if (ft_strcmp(opt, "rb\n"))
		rb(stack, STACK);
	else if (ft_strcmp(opt, "rr\n"))
		rr(stack, STACK);
	else if (ft_strcmp(opt, "rra\n"))
		rra(stack, STACK);
	else if (ft_strcmp(opt, "rrb\n"))
		rrb(stack, STACK);
	else if (ft_strcmp(opt, "rrr\n"))
		rrr(stack, STACK);
	else if (ft_strcmp(opt, "pa\n"))
		pa(stack, STACK);
	else if (ft_strcmp(opt, "pb\n"))
		pb(stack, STACK);
	print_stacks(stack);
}

void	print_stacks(t_stacks *stack)
{
	int	i;

	i = 0;
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
	ft_printf("	Stack A			Stack B		|\n");
	ft_printf("	-------			-------		|\n");
	while (stack->size_a > i || stack->size_b > i)
	{
		if (stack->size_a > i && stack->size_b > i)
		{
			ft_printf("	%d", stack->a[i]);
			ft_printf("			%d		|\n", stack->b[i]);
		}
		else if (stack->size_a > i)
			ft_printf("	%d			-		|\n", stack->a[i]);
		else
			ft_printf("	-			%d		|\n", stack->b[i]);
		i++;
	}
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
}

void	checker_start(t_stacks *stack)
{
	int	i;

	i = 0;
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
	ft_printf("	STACK A			STACK B		|\n");
	ft_printf("	-------			-------		|\n");
	while (stack->size_a > i)
	{
		ft_printf("	%d			-		|\n", stack->a[i]);
		i++;
	}
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
}
