/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:43:27 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 15:18:40 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define INTMAX 2147483647
# define INTMIN -2147483648
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct t_stack
{
	int				values;
	struct t_stack	*next;
}	t_stack;

typedef struct t_stacks
{
	struct t_stack			*first_a;
	struct t_stack			*first_b;
	struct t_statistics		*stats;
	struct t_actions_cheap	*acts;
	struct t_actions_cheap	*cheap;
}				t_stacks;

typedef struct t_statistics
{
	int			max_a;
	int			max_b;
	int			min_a;
	int			min_b;
}				t_statistics;

typedef struct t_actions_cheap
{
	int	cost;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}		t_actions_cheap;

void		ft_clearnodes(t_stack **lst);
void		check_inputs(int argc, char **argv);
void		check_int(int argc, char **argv);
void		check_valid_int(int argc, char **argv);
void		if_doubles(t_stack *first);
void		print_error(void);
void		ft_sort(t_stacks *stacks);
void		sort_two(t_stacks *stacks);

#endif
