/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:01:09 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/24 17:38:52 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char rest;

	rest = 0;
	i = 0;
	while (i < 8)
	{
		rest <<= 1;
		rest = (octet & 1) | rest;
		octet >>= 1;
		i++;
	}
	return (rest);
}

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char div;

	i = 0;
	div = 128;
	while (i < 8)
	{
		if ((octet & div) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		div >>= 1;
		i++;
	}
}

int		main()
{
	unsigned char octet = 5;
	// unsigned char grep;

	print_bits(octet);
	write(1, "\n", 1);

	print_bits(reverse_bits(octet));
	return (0);
}

