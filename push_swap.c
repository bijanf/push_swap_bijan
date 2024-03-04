/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:29:17 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/04 14:18:46 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
//#include <stdio.h>

static long	ft_atol(const char *str)
{
	long	num;
	int		isneg;
	int		i;

	num = 0;
	isneg = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * isneg);
}
t_node	*return_cheapest(t_node *stack)
{
	if (NULL == stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	init_input(t_node **a, char **argv, bool flag_argc_2)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (syntax_error(argv[i]))
			free_error(a, argv, flag_argc_2);
		nbr = ft_atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_error(a, argv, flag_argc_2);
		if (error_repet(*a, (int)nbr))
			free_error(a, argv, flag_argc_2);
		append_node(a, (int)nbr);
		++i;
	}
	if (flag_argc_2)
		free_all(argv);
}

int main(int argc, char **argv)
{
	t_node *a;
	t_node *b;

	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
	{
		return (1);
	}
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
	}
	init_input(&a, argv + 1, argc == 2);
	if (!sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			three_sort(&a);
		else
			push_swap(&a, &b);
	}
	return (0);
}
