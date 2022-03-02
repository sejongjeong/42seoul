/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:08:32 by sejeong           #+#    #+#             */
/*   Updated: 2022/03/03 00:07:59 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker(t_stacks *stack)
{
	char		*opt;

	while (1)
	{
		opt = get_next_line(0);
		if (ft_strcmp(opt, "\n"))
		{
			if (check_sorted(stack->a, stack->size_a, ASCENDING)
				&& stack->size_b == 0)
				ft_printf("\033[0;32mOK\n");
			else
				ft_printf("\033[0;31mK0\n");
			free(stack->a);
			free(stack->b);
			exit (1);
		}
		if (!check_opt(opt, stack))
		{
			free(stack->a);
			free(stack->b);
			return ;
		}
		ft_opt(stack, opt);
	}
}

int	*check_errors(char **argv)
{
	int	*a;
	int	size;
	int	i;

	i = -1;
	size = ps_strlen(argv);
	a = malloc(size * sizeof(int));
	while (++i < size)
		a[i] = ps_atoi(argv[i], a);
	check_repeat(a, size);
	return (a);
}

int	main(int argc, char **argv)
{
	t_stacks	stack;

	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		stack.a = check_errors(argv);
		stack.size_a = ps_strlen(argv);
		checker_start(&stack);
		stack.b = malloc(stack.size_a * sizeof(int));
		if (!stack.b)
		{
			free(stack.a);
			return (0);
		}
		stack.size_b = 0;
		checker(&stack);
	}
	return (0);
}
