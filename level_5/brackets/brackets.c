/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:59:23 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/15 19:06:41 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

void	data_init(t_brackets *data)
{
	data->bracket = 0;
	data->square_br = 0;
	data->braces = 0;
	data->close_bracket = 0;
	data->close_square_br = 0;
	data->close_braces = 0;
}



int		brackets(char *str)
{
	int			i;
	int			j;
	t_brackets	*data;

	data_init(data);
	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	j = i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '{' || str[0] == '[' || str[0] == '(')
		{
			data->bracket = (str[0] == '{') ? 1 : 0;
			data->square_br = (str[0] == '[') ? 1 : 0;
			data->braces = (str[0] == '(') ? 1 : 0;
		}
		else if (str[j] == '}' || str[j] == ']' || str[j] == ')')
		{
			data->close_bracket = (str[j] == '}') ? 1 : 0;
			data->close_square_br = (str[j] == ']') ? 1 : 0;
			data->close_braces = (str[j] == ')') ? 1 : 0;
		}
		i++;
	}
	if (str[0] == '\0')
	{
		write(1, "OK\n", 3);
		return (0);
	}
	if (data->bracket == 1 && data->close_bracket == 1)
		write(1, "OK\n", 3);
	else if (data->square_br == 1 && data->close_square_br == 1)
		write(1, "OK\n", 3);
	else if (data->braces == 0 && data->close_braces == 1)
		write(1, "OK\n", 3);
	else
		write(1, "Error\n", 6);
	return (0);
}

int		main(int ac, char **av)
{
	int i;
	int x;


	i = 1;
	x = 0;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (i < ac)
		{
			x = brackets(av[i]);
			// if (x == 1)
			// {
			// 	return (0);
			// }
			i++;
		}
	}
	// if (x == 0)
	// 	return (0);
	return (0);
}
