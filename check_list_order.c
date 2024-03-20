/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:05:38 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 13:38:31 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_list_order(t_stacks *stacks)
{
	t_stack	*ptr;
	int		i;
	int		num;

	i = 1;
	ptr = stacks->first_a;
	num = ptr->values;
	while (i++ < ft_listsize(stacks->first_a))
	{
		ptr = ptr->next;
		if (num > ptr->values)
			return (0);
		num = ptr->values;
	}
	ft_clearnodes(&stacks->first_a);
	exit(0);
}
