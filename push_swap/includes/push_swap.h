/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:07:11 by sejeong           #+#    #+#             */
/*   Updated: 2022/03/02 23:48:24 by sejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdlib.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stacks;

# define ASCENDING 0
# define DESCENDING 1
# define OPT 0
# define STACK 1

void	push_swap(char **argv);
int		ps_strlen(char **argv);
void	ft_error(int *stack);
int		ps_atoi(char *str, int *stack);
void	check_repeat(int *stack, int size);

void	sa(t_stacks *stack, int print);
void	sb(t_stacks *stack, int print);
void	ss(t_stacks *stack, int print);
void	ra(t_stacks *stack, int print);
void	rb(t_stacks *stack, int print);
void	rr(t_stacks *stack, int print);
void	rra(t_stacks *stack, int print);
void	rrb(t_stacks *stack, int print);
void	rrr(t_stacks *stack, int print);
void	pb(t_stacks *stack, int print);
void	pa(t_stacks *stack, int print);

int		ft_sort(t_stacks *stack, int size);
int		check_sorted(int *pile, int size, int order);
void	sort_three_a(t_stacks *s);
void	sort_bubble(int *tmp_stack, int size);

int		quicksort_a(t_stacks *stack, int len, int cnt);
int		quicksort_b(t_stacks *stack, int len, int cnt);
void	quicksort_3(t_stacks *stack, int len);
int		sort_small_b(t_stacks *stack, int len);
int		ft_push(t_stacks *stack, int len, int operation);
int		get_mediane(int *pivot, int *stack, int size);

int		*ft_check_errors(char **argv);
void	checker_start(t_stacks *stack);
char	*get_next_line(int fd);
void	checker(t_stacks *stack);
int		check_opt(char *opt, t_stacks *stack);
void	opt(t_stacks *stack, char *opt);
void	print_stacks(t_stacks *stack);

#endif