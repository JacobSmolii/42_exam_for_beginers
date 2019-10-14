/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 12:49:17 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/25 17:33:39 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == '\t' || str[i - 1] == ' ') \
				 && str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
		write(1, "\n", 1);
	else
		while (i < ac)
		{
			str_capitalizer(av[i]);
			i++;
		}
	return (0);
}
