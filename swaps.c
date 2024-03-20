/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:10:40 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 15:17:07 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stacks *stacks, char ch)
{
	t_stack	*first_a;
	t_stack	*first_b;

	first_a = stacks->first_a;
	first_b = stacks->first_b;
	if (ch == 'a')
		ft_swap_a(first_a, 1);
	else if (ch == 'b')
	{
		if (first_b == NULL || first_b->next == NULL)
			return ;
		ft_swap_b(first_b, 1);
	}
	else
	{
		if (first_a == NULL || first_a->next == NULL || first_b == NULL
			|| first_b->next == NULL)
			return ;
		ft_swap_a(first_a, 0);
		ft_swap_b(first_b, 0);
		ft_printf("ss\n");
	}
}
void	ft_swap_a(t_stack *first_a, int print)
{
	t_stack	*ptr;
	int		tmp;

	ptr = first_a;
	tmp = ptr->values;
	ptr->values = ptr->next->values;
	ptr->next->values = tmp;
	if (print)
		ft_printf("sa\n");
}

void	ft_swap_b(t_stack *first_b, int print)
{
	t_stack	*ptr;
	int		tmp;

	ptr = first_b;
	tmp = ptr->values;
	ptr->values = ptr->next->values;
	ptr->next->values = tmp;
	if (print)
		ft_printf("sb\n");‚
}
