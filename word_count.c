/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:34:31 by bfallah-          #+#    #+#             */
/*   Updated: 2024/02/26 13:08:08 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "libft/libft.h"

static int	word_count(char *c, char seperator)
{
	int		i;
	int		count;
	bool	in_word;

	i = 0;
	count = 0;
	in_word = false;
	while (c[i] != '\0')
	{
		while (c[i] && c[i] == seperator)
		{
			i++;
		}
		if (c[i] && c[i] != seperator && in_word == false)
		{
			in_word = true;
			count++;
		}
		while (c[i] && c[i] != seperator)
		{
			i++;
		}
		in_word = false;
	}
	return (count);
}
/*
int	main(void)
{
	char	*str = "          Hello World     khfekfjhe ouylhyn dfmdvwteih 548r5 5 ";
	printf("%d\n", word_count(str, ' '));
	return (0);
}*/
