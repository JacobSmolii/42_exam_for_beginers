/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 18:17:45 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/17 18:23:03 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int i;
	int a;

	a = 0;
	i = 0;
	while(str[i])
		i++;
	i--;
	while (a < str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
