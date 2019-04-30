/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 12:17:28 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/05 13:36:08 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x >= 10)
		ft_putnbr(x / 10);
	ft_putchar(x % 10 + 48);
}

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
	while (str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\0' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - 48);
	return (nbr * sign);
}

void	prime_sum(int x)
{
	int i;
	int j;
	int rest;

	i = 2;
	rest = 0;
	while (i <= x)
	{
		j = 2;
		while (j <= i)
		{
			if (i % j == 0)
				break ;
			j++;
		}
		if (i == j)
			rest = rest + i;
		i++;
	}
	ft_putnbr(rest);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac != 2 || av[1] < 0)
		write(1, "0\n", 2);
	else
		prime_sum(ft_atoi(av[1]));
	return (0);
}

