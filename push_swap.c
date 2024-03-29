/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:29:17 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 13:37:16 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;

	check_inputs(argc, argv);
	stack.first_a = create_list_a(argc, argv);
	stack.first_b = NULL;
	if_doubles(stack.first_a);
	ft_sort(&stack);
	free_all(&stack);
}
