/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:35:55 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/01 21:29:20 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int j;
	while (av[1][i] != '\0')
		i++;
	i--;
	while (av[1][i] == ' ')
		i--;
	j = i;

	while (av[1][i] != ' ')
	{
		if (av[1][i - 1] == ' ')
			break ;
		i--;
	}

	while (i <= j)
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
