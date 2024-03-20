/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:41:07 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 15:07:24 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stacks *stacks)
{
	if (check_list_order(stacks))
		return ;
	if (ft_listsize(stacks->first_a) == 2)
		sort_two(stacks);
	else if (ft_listsize(stacks->first_a) == 3)
		sort_three(stacks, 1);
	else if (ft_listsize(stacks->first_a) == 4)
		sort_four(stacks);
	ft_push(stacks, 'b');
	ft_push(stacks, 'b');
	move_cheapest(stacks);
	sort_three(stacks, 0);
	move_stack_a(stacks);
}
