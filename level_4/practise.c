/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practise.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 12:12:28 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/30 14:11:24 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		get_length(int nbr)
{
	int len;

	len = 1;
	if (nbr > 0)
	{
		while (nbr >= 10)
		{
			nbr /= 10;
			len++;
		}
	}
	if (nbr < 0)
	{
		len++;
		while (nbr <= -10)
		{
			nbr /= 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		len;
	int		flag;
	char	*str;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = get_length(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = len;
	str[i] = '\0';
	i--;
	flag = 0;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		flag = 1;
	}

	while (i >= 0)
	{
		str[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (flag == 1)
		str[0] = '-';
	return (str);
}

int		main()
{
	int		x = -123;
	char	*str;

	printf("len of nbr: %d\n", get_length(x));
	str = ft_itoa(x);
	printf("%s\n", str);
	return (0);
}















