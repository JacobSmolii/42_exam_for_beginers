/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 20:56:20 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/01 14:00:00 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		work_str2(char *str1, char *str2, int i)
{
	int k;
	int flag1;

	k = 0;
	flag1 = 0;
	while (str2[k] != '\0')
	{
		if (str1[i] == str2[k])
			flag1 = 1;
		k++;
	}
	return (flag1);
}


int		work_str1(char *str1, int i)
{
	int j;
	int flag;

	j = 0;
	flag = 0;
	while (j < i)
	{
		if (str1[i] == str1[j])
			flag = 1;
		j++;
	}
	return (flag);
}

void	inter(char *str1, char *str2)
{
	int i;
	int flag;
	int flag1;

	i = 0;
	while (str1[i] != '\0')
	{
		flag = work_str1(str1, i);
		flag1 = work_str2(str1, str2, i);
		if (flag == 0 && flag1 == 1)
			write(1, &str1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	else
		write(1, "\n", 1);
	return (0);
}



// void	inter(char *str1, char *str2)//тоже рабочая версия
// {
// 	int i;
// 	int j;
// 	int k;
// 	int flag;
// 	int flag1;

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
// 		k = 0;
// 		flag1 = 0;
// 		while (str2[k] != '\0')
// 		{
// 			if (str1[i] == str2[k])
// 				flag1 = 1;
// 			k++;
// 		}
// 		if (flag == 0 && flag1 == 1)
// 			write(1, &str1[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

// int		main(int ac, char **av)
// {
// 	if (ac == 3)
// 		inter(av[1], av[2]);
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }
