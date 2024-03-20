/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:22:57 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 15:30:01 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack *stack, char ch)
{
	t_stack	*first_a;
	t_stack	*first_b;

	first_a = stacks->first_a;
	first_b = stacks->first_b;
	if (ch == 'a')
		ft_rotate_a(stacks, stacks->first_a, 1);
	else if (ch == 'b')
	{
		if (head_b == NULL || head_b->next == NULL)
			return ;
		ft_rotate_b(stacks, stacks->first_b, 1);
	}
	else
	{
		if (first_a == NULL || first_a->next == NULL || first_b == NULL
			|| first_b->next == NULL)
			return ;
		ft_rotate_a(stacks, stacks->first_a, 0);
		ft_rotate_b(stacks, first_b, 0);
		ft_printf("rr\n");
	}
}

