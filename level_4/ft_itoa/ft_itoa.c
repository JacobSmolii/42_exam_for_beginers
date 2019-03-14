/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:53:27 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/13 20:25:08 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		len_nbr(int nbr)
{
	int	len;
	int	sign;

	sign = -1;
	len = 1;
	if (nbr < 0)
	{
		nbr = nbr * sign;
		len++;
	}
	if (nbr > 10)
	{
		while (nbr > 10)
		{
			nbr = nbr / 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		len;
	char	*str;
	int		flag;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = len_nbr(nbr);
	i = len;
	str = (char *)malloc(sizeof(char) * (len + 1));
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

int		main(void)
{
	int		 x = 123;
	char	*str;

	printf("len of nbr: %d\n", len_nbr(x));

	str = ft_itoa(x);
	printf("%s\n", str);
	return (0);
}
