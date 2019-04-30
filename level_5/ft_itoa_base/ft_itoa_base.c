/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:09:20 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/03 17:14:17 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		get_length(int nbr, int base)
{
	int len;

	len = 1;
	if (nbr < 0)
	{
		if (base == 10)
			len++;
		nbr = nbr * (-1);
	}
	if (nbr > 0)
	{
		while (nbr >= base)
		{
			nbr = nbr / base;
			len++;
		}
	}
	return (len);
}

char	get_char(int i)
{
	char	*str;

	str = "0123456789ABCDEF";
	return (str[i]);
}

char	*ft_itoa_base(int value, int base)
{
	int				i;
	int				len;
	int				flag;
	unsigned int	val;
	unsigned int	bas;
	char			*str;

	if (value == -2147483648)
		return ("-2147483648");
	val = value;
	bas = base;
	len = get_length(value, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = len;
	str[i] = '\0';
	i--;
	flag = 0;

	if (value < 0)
	{
		if (bas == 10)
			flag = 1;
		val = value * (-1);
	}

	if (base >= 2 && base <= 16)
	{
		while (i >= 0)
		{
			str[i] = get_char(val % bas);
			val /= bas;
			i--;
		}
	}
	if (flag == 1)
		str[0] = '-';
	return (str);
}

int		main(void)
{
	int		nbr = -2147483648;
	int		base = 10;
	char	*str;

	printf("length of nbr: %d\n", get_length(nbr, base));
	str = ft_itoa_base(nbr, base);

	printf("result: %s\n", str);
	return (0);
}

// int main () // REMOVE!!!
// {
// 	printf("Base 10: 1567        = %s [1567]\n", ft_itoa_base(1567, 10));
// 	printf("Base 10: -1567       = %s [-1567]\n", ft_itoa_base(-1567, 10));
// 	printf("Base 2:  1567        = %s [11000011111]\n", ft_itoa_base(1567, 2));
// 	printf("Base 8: 1567         = %s [3037]\n", ft_itoa_base(1567, 8));
// 	printf("Base 16: 1567        = %s [61F]\n", ft_itoa_base(1567, 16));
// 	printf("Base 10: -2147483648 = %s [-2147483647]\n", ft_itoa_base(-2147483648, 10));
// 	printf("Base 2: 0            = %s [0]\n", ft_itoa_base(0, 2));
// 	return (0);
// }
