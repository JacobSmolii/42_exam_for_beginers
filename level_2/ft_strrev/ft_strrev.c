/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:09:13 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/22 17:35:07 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*rest;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	rest = (char *)malloc(sizeof(char) * (i + 1));
	i--;
	while (i >= 0)
	{
		rest[j] = str[i];
		i--;
		j++;
	}
	rest[j] = '\0';
	return (rest);
}

int		main(void)
{
	char *str;
	char *rest;

	str = "Hello World!";
	rest = ft_strrev(str);
	printf(" mine: %s\n result: %s\n", str, rest);
	return (0);
}
