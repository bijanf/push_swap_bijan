/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:57:53 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 15:21:50 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stacks *stacks)
{
	ft_swap(stacks, 'a');
	ft_clearnodes(&stacks->first_a);
	exit(0);
}

void	sort_three(t_stacks *stacks, int flag)
{
	t_stack	*first_a;
	int		num1;
	int		num2;
	int		num3;

	first_a = stacks->first_a;
	num1 = first_a->content;
	num2 = first_a->next->content;
	num3 = first_a->next->next->content;
	identify_nums_three(stacks, num1, num2, num3);
	if (flag)
	{
		ft_clearnodes_a(&stacks->first_a);
		exit(0);
	}
}

void	identify_nums_three(t_stacks *stacks, int num1, int num2, int num3)
{
	if (num1 > num2 && num1 < num3 && num2 < num3)
		ft_swap(stacks, 'a');
	else if (num1 > num2 && num1 > num3 && num2 < num3)
		ft_rotate(stacks, 'a');
	else if (num1 < num2 && num1 > num3 && num2 > num3)
		ft_rev_rotate(stacks, 'a');
	else if (num1 > num2 && num1 > num3 && num2 > num3)
	{
		ft_swap(stacks, 'a');
		ft_rev_rotate(stacks, 'a');
	}
	else if (num1 < num2 && num1 < num3 && num2 > num3)
	{
		ft_swap(stacks, 'a');
		ft_rotate(stacks, 'a');
	}
}
