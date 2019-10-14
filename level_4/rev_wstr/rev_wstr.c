/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 18:32:00 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/01 20:37:32 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		space_skip(char c) // правильное решение
{
	return (c == ' ' || c == '\t');
}

void	rev_wstr(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (!space_skip(str[i]) && (space_skip(str[i + 1]) ||  str[i + 1] == '\0'))
			j = i;
		while (i >= 0 && !space_skip(str[i]))
		{
			if (space_skip(str[i - 1]) || i == 0)
			{
				k = i;
				break ;
			}
			i--;
		}
		if (k <= j)
		{
			while (k <= j)
			{
				write(1, &str[k], 1);
				k++;
			}
			if (i != 0)
				write(1, " ", 1);
		}
		i--;
	}
	write(1, "\n", 1);
}








// void	print_words(char *str, int i, int *k, int *j)
// {
// 	if (*k <= *j)
// 	{
// 		while (*k <= *j)
// 		{
// 			write(1, &str[*k], 1);
// 			(*k)++;
// 		}
// 		if (i != 0)
// 			write(1, " ", 1);
// 	}
// }

// void	rev_wstr(char *str)
// {
// 	int i;
// 	int j;
// 	int k;

// 	int *k1;
// 	int *j1;

// 	i = 0;
// 	k = 0;
// 	j = 0;
// 	k1 = &k;
// 	j1 = &j;
// 	while (str[i] != '\0')
// 		i++;
// 	i--;
// 	while (i >= 0)
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
// 			j = i;
// 		while (i >= 0 && str[i] != ' ' && str[i] != '\t')
// 		{
// 			if (str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0)
// 			{
// 				k = i;
// 				break ;
// 			}
// 			i--;
// 		}
// 		print_words(str, i, k1, j1);
// 		i--;
// 	}
// 	write(1, "\n", 1);
// }

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
