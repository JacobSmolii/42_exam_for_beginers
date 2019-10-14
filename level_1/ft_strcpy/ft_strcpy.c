/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 18:07:42 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/15 20:07:47 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(int ac, char **av)
{
	char	*src;
	char	*dest;
	char	*str3;
	int		i;

	i = ac;
	src = av[2];
	dest = av[1];
	str3 = "";
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	str3 = ft_strcpy(dest, src);

	printf("rest: %s\n", str3);

	return (0);
}
