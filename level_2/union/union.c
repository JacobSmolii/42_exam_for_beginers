/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 21:34:52 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/22 19:03:07 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		work_str_1(char *str, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[i] == str[j])
			return (1);
		j++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (work_str_1(av[1], i) == 0)
				write(1, &av[1][i], 1);
			i++;
		}

	}
	else
		write(1, "\n", 1);
	return (0);
}











// void 	work_str_1(char *str1)// версия вторая
// {
// 	int i;
// 	int j;
// 	int flag;

// 	i = 0;
// 	while (str1[i] != '\0')
// 	{
// 		j = 0;
// 		flag = 0;
// 		while (j < i)
// 		{
// 			if (str1[i] == str1[j])
// 				flag = 1;
// 			j++;
// 		}
// 		if (flag == 0)
// 			write(1, &str1[i], 1);
// 		i++;
// 	}
// }

// int		work_str_2_with_1(char *str1, char *str2, int i)
// {
// 	int k;
// 	int	flag;

// 	k = 0;
// 	flag = 0;
// 	while (str1[k] != '\0')
// 	{
// 		if (str2[i] == str1[k])
// 			flag = 1;
// 		k++;
// 	}
// 	return (flag);
// }

// void	work_str_2(char *str1, char *str2)
// {
// 	int i;
// 	int j;
// 	int flag;
// 	int flag1;

// 	i = 0;
// 	// flag1 = 0;
// 	while (str2[i] != '\0')
// 	{
// 		j = 0;
// 		flag = 0;
// 		flag1 = work_str_2_with_1(str1, str2, i);
// 		while (j < i)
// 		{
// 			if (str2[i] == str2[j])
// 				flag = 1;
// 			j++;
// 		}
// 		if (flag == 0 && flag1 == 0)
// 			write(1, &str2[i], 1);
// 		i++;
// 	}
// }

// void	ft_union(char *str1, char *str2)
// {
// 	work_str_1(str1);
// 	work_str_2(str1, str2);
// 	write(1, "\n", 1);
// }

// int		main(int ac, char **av)
// {
// 	if (ac == 3)
// 		ft_union(av[1], av[2]);
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }






// void	ft_union(char *str1, char *str2)//версия первая
// {
// 	int i;
// 	int j;
// 	int flag;

// 	i = 0;
// 	while (str1[i] != '\0')
// 	{
// 		j = 0;
// 		flag = 0;
// 		while (j < i)
// 		{
// 			if (str1[i] == str1[j])
// 				flag = 1;
// 			j++;
// 		}
// 		if (flag == 0)
// 			write(1, &str1[i], 1);
// 		i++;
// 	}
// 	i = 0;
// 	int k;
// 	while (str2[i] != '\0')
// 	{
// 		j = 0;
// 		flag = 0;
// 		k = 0;
// 		while (str1[k] != '\0')
// 		{
// 			if (str2[i] == str1[k])
// 				flag = 1;
// 			k++;
// 		}
// 		while (j < i)
// 		{
// 			if (str2[i] == str2[j])
// 				flag = 1;
// 			j++;
// 		}
// 		if (flag == 0)
// 			write(1, &str2[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

// int		main(int ac, char **av)
// {
// 	if (ac == 3)
// 		ft_union(av[1], av[2]);
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }
