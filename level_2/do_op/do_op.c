/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 20:26:46 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/24 17:47:08 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[1] == NULL && av[3] == NULL)
			return (0);
		if (av[2][0] == '+')
			printf("%d\n", atoi(av[1]) + atoi(av[3]));
		if (av[2][0] == '-')
			printf("%d\n", atoi(av[1]) - atoi(av[3]));
		if (av[2][0] == '*')
			printf("%d\n", atoi(av[1]) * atoi(av[3]));
		if (av[2][0] == '/')
			printf("%d\n", atoi(av[1]) / atoi(av[3]));
		if (av[2][0] == '%')
			printf("%d\n", atoi(av[1]) % atoi(av[3]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
