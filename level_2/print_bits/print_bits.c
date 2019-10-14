/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:29:05 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/23 19:34:59 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int		main(void)
{
	int i = 42;

	print_bits(i);
	return (0);
}
