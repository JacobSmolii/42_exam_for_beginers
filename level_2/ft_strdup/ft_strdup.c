/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 19:27:23 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/17 20:55:21 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) + 1)))
		return (0);

	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	char *str = "Hello!";
	char *rst;

	rst = ft_strdup(str);
	printf("%s\n", rst);
	return (0);
}
