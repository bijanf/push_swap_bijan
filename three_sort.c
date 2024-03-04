/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:57:53 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/04 14:07:58 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

static t_node	*find_topest(t_node *stack)
{
	int				topest;
	t_node	*topest_node;

	if (stack == NULL)
		return (NULL);
	topest = INT_MIN;
	while (stack)
	{
		if (stack->value > topest)
		{
			topest = stack->value;
			topest_node = stack;
		}
		stack = stack->next;
	}
	return (topest_node);
}

void	three_sort(t_node **a)
{
	t_node	*topest_node;

	topest_node = find_topest(*a);
	if (*a == topest_node)
		ra(a, false);
	else if ((*a)->next == topest_node)
		rra(a, false);
	if ((*a)->value > (*a)->next->value)
		sa(a, false);
}
void	five_sort(t_node **a, t_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, ft_smallest(*a), 'a');
		pb(b, a, false);
	}
}
