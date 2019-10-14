/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:49:34 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/28 19:08:26 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		pgcd(char *x, char *y)
{
	int i;

	i = atoi(x);
	while (atoi(x) % i != 0 || atoi(y) % i != 0)
		i--;
	return (i);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", pgcd(av[1], av[2]));
	else
		printf("\n");
	return (0);
}
