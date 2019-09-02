/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 13:39:34 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/30 12:59:05 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void	fprime(int nbr)
{
	int i;

	i = 2;
	if (nbr == 1)
		printf("1");
	while (i <= nbr)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr == i)
				break ;
			printf("*");
			nbr = nbr / i;
			i = 1;
		}
		i++;
	}
	printf("\n");
}

int		main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	else
		printf("\n");
	return (0);
}
