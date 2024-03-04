/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:41:07 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/04 12:56:22 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **head)
{
	int	len;

	len = stack_len(*head);
	if (*head == NULL || head == NULL || len == 1)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}
void	sa(t_node	**a, bool is_print)
{
	swap(a);
	if (!is_print)
		write(1, "sa\n", 3);
}
void	sb(t_node **b, bool is_print)
{
	swap(b);
	if (!is_print)
		write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b, bool is_print)
{
	swap(a);
	swap(b);
	if (!is_print)
		write(1, "ss\n", 3);
}
