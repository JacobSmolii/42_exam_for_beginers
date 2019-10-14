/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searcg_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 21:23:19 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/16 21:25:31 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
			str[i] = b[0];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][1] != '\0' && av[3][1] != '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		ft_search_and_replace(av[1], av[2], av[3]);
	}
	else
		write(1, "\n", 1);
	return (0);
}

// int		main(int ac, char **av)
// {
// 	int i;


// 	i = 0;
// 	if (ac != 4)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}

// 	if (av[2][1] != '\0' && av[3][1] != '\0')
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}

// 	while (av[1][i] != '\0')
// 	{
// 		if (av[1][i] == av[2][0])
// 			av[1][i] = av[3][0];
// 		write(1, &av[1][i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
