/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:29:17 by bfallah-          #+#    #+#             */
/*   Updated: 2024/02/26 09:03:34 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

// Define your stack node structure
typedef struct s_node
{
	int	value;
	struct s_node	next;
}	t_node;

// Define your stack structure
typedef struct s_stack
{
	t_node	*top;
}	t_stack;

// Function prototypes for stack operations
void	sa(t_stack	*a);
void	sb(t_stack	*b);
void	ss(t_stack	*a, t_stack	*b);
void	pa(t_stack	*a, t_stack	*b);
void	pb(t_stack	*a, t_stack	*b);
void	ra(t_stack	*a);
void	rb(t_stack	*b);
void	rr(t_stack	*a, t_stack	*b);
void	rra(t_stack	*a);
void	rrb(t_stack	*b);
void	rrr(t_stack	*a, t_stack	*b);

// Function to parse and validate input
int parse_input(int argc, char **argv, t_stack *a);

// Main sorting algorithm
void radix_sort(t_stack *a, t_stack *b);

// Main program
int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Error\n");
		return 1;
	}

	t_stack a, b;
	// Initialize stacks a and b

	if (!parse_input(argc, argv, &a)) {
		printf("Error\n");
		// Free resources if needed
		return 1;
	}

	// Perform sorting
	radix_sort(&a, &b);

	// Cleanup and exit
	// Free resources if needed

	return 0;
}

// Implementations of parse_input, radix_sort, and stack operations
