/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:41:38 by bfallah-          #+#    #+#             */
/*   Updated: 2024/03/19 13:12:01 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_inputs(int argc, char **argv)
{
	if (argc == 1)
		exit (0);
	check_int(argc, argv);
	check_valid_int(argc, argv);
}

void	check_int(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '\0')
			print_error();
		while ((j < (int)ft_strlen(argv[i])) && \
				(argv[i][j] == '-' || argv[i][j] == '+'))
		{
			j++;
		}
		if (argv[i][j] == '\0')
			print_error();
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
				print_error();
			j++;
		}
		i++;
	}
}

void	check_valid_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atol(argv[i]) > INTMAX || ft_atol(argv[i]) < INTMIN)
			print_error();
		i++;
	}
}

void	if_doubles(t_stack *first)
{
	t_stack	*tmp;
	t_stack	*ptr;
	int		num;

	ptr = first;
	while (ptr != NULL)
	{
		tmp = ptr;
		num = tmp->values;
		tmp = tmp->next;
		while (tmp != NULL)
		{
			if (num == tmp->values)
			{
				ft_putstr_fd("Error\n", 2);
				ft_clearnodes_a(&first);
				exit(0);
			}
			tmp = tmp->next;
		}
		ptr = ptr->next;
	}
}

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (0);
}
