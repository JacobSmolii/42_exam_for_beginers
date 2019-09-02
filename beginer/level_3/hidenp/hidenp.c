/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:53:18 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/28 18:01:27 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hidenp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str2[i] != '\0')
	{
		if (str1[j] == str2[i])
			j++;
		i++;
	}
	if (str1[j] == '\0')
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_hidenp(av[1], av[2]);
	else
		write(1, "\n", 1);
	return (0);
}
