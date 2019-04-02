/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 20:30:38 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/26 15:36:18 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str, int i, int j)
{
	while (j <= i)
	{
		if (str[j] == ' ' || str[j] == '\t')
		{
			write(1, "   ", 3);
			while (str[j] == ' ' || str[j] == '\t')
				j++;
		}
		else
		{
			write(1, &str[j] , 1);
			j++;
		}
	}
	write(1, "\n", 1);
}


void	expand_str(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	j = i;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;


	// while (j <= i)
	// {
	// 	if (str[j] == ' ' || str[j] == '\t')
	// 	{
	// 		write(1, "   ", 3);
	// 		while (str[j] == ' ' || str[j] == '\t')
	// 			j++;
	// 	}
	// 	else
	// 	{
	// 		write(1, &str[j] , 1);
	// 		j++;
	// 	}
	// }
	print_str(str, i, j);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
