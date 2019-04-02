/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practise.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:09:20 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/01 18:45:13 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

char			ft_my_ascii(int n)
{
	char	set[16] = "0123456789ABCDEF";

	return(set[n]);
}

int				ft_numlent(unsigned int  n, int unsigned base)
{
	int			lent = 2;

	while (n >= base)
	{
		n = n / base;
		lent++;
	}
	return (lent);
}

char				*ft_itoa_base(int value, int base)
{
	char			*str;
	unsigned int	val;
	unsigned int	bas;
	int				i = 0;
	int				s = 0;

	val = value;
	bas = base;
	if (value < 0)
	{
		val = value * -1;
		if (bas == 10)
			s++;
	}
	i = s + ft_numlent(val, bas);
	printf("lent = %d\n", i);
	str = (char *)malloc(sizeof(char) * i--);
	if (s == 1)
		str[0] = '-';
	str[i--] = '\0';
	while (i >= 0 && str[i] != '-')
	{
		if (val < bas)
			str[i--] = ft_my_ascii(val);
		else
		{
			str[i--] = ft_my_ascii(val % bas);
			val = val / bas;
		}
	}
	return (str);
}

// int				main(int argc, char **argv)
// {
// 	int			n = 0;
// 	int			base = 0;
// 	int			max = 2147483647;
// 	int			min = -2147483648;

// 	if (argc > 1)
// 	{
// 		n = atoi(argv[1]);
// 		base = atoi(argv[2]);
// 		printf("string = %s\n", ft_itoa_base(n, base));
// 		printf("INT_MAX = %s\n", ft_itoa_base(max, base));
// 		printf("INT_MIN = %s\n", ft_itoa_base(min, base));
// 	}
// 	return (0);
// }

int main () // REMOVE!!!
{
	printf("Base 10: 1567        = %s [1567]\n", ft_itoa_base(1567, 10));
	printf("Base 10: -1567       = %s [-1567]\n", ft_itoa_base(-1567, 10));
	printf("Base 2:  1567        = %s [11000011111]\n", ft_itoa_base(1567, 2));
	printf("Base 8: 1567         = %s [3037]\n", ft_itoa_base(1567, 8));
	printf("Base 16: 1567        = %s [61F]\n", ft_itoa_base(1567, 16));
	printf("Base 10: -2147483648 = %s [-2147483647]\n", ft_itoa_base(-2147483648, 10));
	printf("Base 2: 0            = %s [0]\n", ft_itoa_base(0, 2));
	return (0);
}
