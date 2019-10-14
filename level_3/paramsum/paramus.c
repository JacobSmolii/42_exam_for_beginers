/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:54:22 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/27 21:14:24 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int main(int ac, char **av)
{
	av[0][0] = '.';
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
