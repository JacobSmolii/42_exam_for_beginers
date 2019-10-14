/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 22:15:48 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/21 17:06:01 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(122 - (str[i] - 97));
		else if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(90 - (str[i] - 65));
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(97 + (122 - str[i]));
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(65 + (90 - str[i]));
		else
			ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
