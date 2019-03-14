/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:15:03 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/07 19:49:29 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


void	rostring(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*s;
	int		has_word;

	i = 0;
	k = 0;
	has_word = 0;

	while (str[i] == ' ')
		i++;
	j = i;
	while (str[j] != ' ' && str[j] != '\0')
	{
		k++;
		j++;
	}
	s = (char *)malloc(sizeof(char) * (k + 1));

	j = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		s[j] = str[i];
		j++;
		i++;
	}
	s[j] = '\0';
	//сохранил первое слово

	while (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			write(1, " ", 1);
			while (str[i] == ' ')
				i++;
		}
		else
			has_word = 1;
		write(1, &str[i], 1);
		i++;
	}

	k = 0;
	if (str[i] == '\0' && has_word == 1)
		write(1, " ", 1);

	while (s[k] != '\0')
	{
		write(1, &s[k], 1);
		k++;
	}
	write(1, "\n", 1);

}

int		main(int ac, char **av)
{
	if (ac == 2)
		rostring(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
