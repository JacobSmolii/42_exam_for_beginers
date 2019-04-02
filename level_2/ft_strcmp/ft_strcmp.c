/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:04:27 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/22 20:08:56 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_strcmp(const char *str1, const char *str2)
// {
// 	int i;

// 	i = 0;
// 	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
// 		i++;
// 	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
// }


int		ft_strcmp(char *s1, char *s2)//моя версия
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *str1;
	char *str2;

	str2 = "ab";
	str1 = "abc";

	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}
