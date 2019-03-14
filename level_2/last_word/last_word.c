/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:35:57 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/02 10:26:01 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;

	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	j = i;

	while (i >= 0 && (str[i] != ' ' || str[i] != '\t'))
	{
		if (str[i - 1] == ' ')
			break ;
		i--;
	}
	while (i >= 0 && i <= j)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
