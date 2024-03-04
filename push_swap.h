/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:43:27 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/04 14:11:03 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
typedef struct s_node
{
	int					value;
	int					current_position;
	int					final_index;
	int					push_price;
	bool				above_median;
	bool				cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}				t_node;

void		sa(t_node	**a, bool is_print);
void		sb(t_node **b, bool is_print);
void		ss(t_node **a, t_node **b, bool is_print);
size_t		ft_strlen(const char *s);
char		**ft_split(char *str, char separator);
t_node		*find_last_node(t_node *head);
void		append_node(t_node **stack, int nbr);
bool		sorted(t_node *stack);
int			stack_len(t_node *stack);
t_node		*ft_smallest(t_node *stack);
void		set_current_position(t_node *stack);
void		set_price(t_node *a, t_node *b);
void		set_cheapest(t_node *b);
void		init_nodes(t_node *a, t_node *b);
void		finish_rotation(t_node **stack,	t_node *top_node, char stack_name);
void		ra(t_node **a, bool checker);
void		rb(t_node **b, bool checker);
void		rr(t_node **a, t_node **b, bool checker);
void		free_all(char **argv);
void		free_s(t_node **stack);
void		free_error(t_node **a, char **argv, bool flag_argc_2);
int			syntax_error(char *str_nbr);
int			error_repet(t_node *a, int nbr);
void		three_sort(t_node **a);
void		five_sort(t_node **a, t_node **b);
void		rra(t_node **a, bool checker);
void		rrb(t_node **b, bool checker);
void		rrr(t_node **a, t_node **b, bool checker);
void		pa(t_node **a, t_node **b, bool checker);
void		pb(t_node **a, t_node **b, bool checker);
void		push_swap(t_node **a, t_node **b);
t_node		*return_cheapest(t_node *stack);

#endif
