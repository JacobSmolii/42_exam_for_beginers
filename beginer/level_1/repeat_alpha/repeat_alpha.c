/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:18:12 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/01 14:42:35 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lower_case(char c)
{
	int cnt;
	int a;

	a = 0;
	cnt = str[i] - 96;
	while (a < cnt)
	{
		write(1, &str[i], 1);
		a++;
	}
}

void	upper_case(char c)
{
	int cnt;
	int a;

	a = 0;
	cnt = str[i] - 64;
	while (a < cnt)
	{
		write(1, &str[i], 1);
		a++;
	}
}
void	ft_repeat_alpha(char *str)
{
	int i;
	int a;
	int cnt;

	i = 0;
	while (str[i] != '\0')
	{
		a = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			lower_case(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			upper_case(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_repeat_alpha(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
