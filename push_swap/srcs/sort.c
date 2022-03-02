/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:57:34 by sejeong           #+#    #+#             */
/*   Updated: 2022/03/03 00:09:50 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_bubble(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	sort_three_a(t_stacks *s)
{
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		sa(s, OPT);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		sa(s, OPT);
		rra(s, OPT);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ra(s, OPT);
	if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
	{
		sa(s, OPT);
		ra(s, OPT);
	}
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		rra(s, OPT);
}

int	ft_sort(t_stacks *stack, int size)
{
	if (check_sorted(stack->a, stack->size_a, ASCENDING) == 0)
	{
		if (size == 2)
			sa(stack, OPT);
		else if (size == 3)
			sort_three_a(stack);
		else
			quicksort_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stacks *stack, int len, int operation)
{
	if (operation == 0)
		pb(stack, OPT);
	else
		pa(stack, OPT);
	len--;
	return (len);
}
