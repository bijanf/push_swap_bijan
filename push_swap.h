/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:43:27 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/04 08:51:37 by bfallah-         ###   ########.fr       */
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

char			**ft_split(char *str, char separator);
void			init_input(t_node **a, char **argv, bool flag_argc_2);
void			append_node(t_node **stack, int value);
void			free_error(t_node **a, char **argv, bool flag_argc_2);
void			free_all(char **argv);
void			free_s(t_node **stack);
int				error_repet(t_node *stack, int value);
int				syntax_error(char *str_nbr);
void			radix_sort(t_node *a, t_node *b);
static long		ft_atol(const char *str);
#endif
