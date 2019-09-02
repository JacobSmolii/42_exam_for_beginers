/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:34:30 by vsmolii           #+#    #+#             */
/*   Updated: 2019/06/18 12:29:47 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int j;
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	j = i;

	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;

	while (j <= i)
	{
		if ((str[j] == '\t' || str[j] == ' ') && str[j - 1] >= 'a' && str[j - 1] <= 'z')
			write(1, " ", 1);
		while (str[j] == ' ')
			j++;
		ft_putchar(str[j]);
		j++;
	}
	ft_putchar('\n');
}

int		main()
{
	char *str = "abc def wowo";
	
	epur_str(str);
	return (0);
}

// int		main(int ac, char **av)
// {
// 	if (ac == 2)
// 		epur_str(av[1]);
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }
