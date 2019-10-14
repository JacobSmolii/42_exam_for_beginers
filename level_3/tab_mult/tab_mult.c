/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:09:18 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/01 18:30:53 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' \
			|| str[i] == '\0' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - 48);
	return (nbr * sign);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

void	tab_mult(int n)
{
	int i;
	int rest;

	i = 1;
	while (i <= 9)
	{
		rest = i * n;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(rest);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	else
		tab_mult(ft_atoi(av[1]));
	return (0);
}

