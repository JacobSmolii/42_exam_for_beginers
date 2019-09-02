/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 17:57:36 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/01 17:56:37 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (!str)
		return (0);
	while (str[i] == '\v' || str[i] == '\r' || str[i] == '\t' ||
			str[i] == '\f' || str[i] == '\0' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - 48);
	return (nbr * sign);
}

void	print_hex(int nbr)
{
	char *str;

	str = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &str[nbr % 16], 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	else
		write(1, "\n", 1);
	return (0);
}

// int		main(int ac, char **av)
// {
// 	char	*str = "123";

// 	printf("%d\n", ft_atoi(str));
// 	if (ac == 2)
// 	{
// 		print_hex(ft_atoi(av[1]));
// 		write(1, "\n", 1);
// 	}
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }
