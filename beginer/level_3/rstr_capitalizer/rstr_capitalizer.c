/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:09:46 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/25 17:33:03 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rstr_capitalizer(char *str)
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
		if ((str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t') \
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

	while (i < ac)
	{
		rstr_capitalizer(av[i]);
		i++;
	}
	return (0);
}
