/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:26:09 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/24 17:38:20 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char   swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

void    print_bits(unsigned char octet)
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

int     main(void)
{
    unsigned char x = 42;

    print_bits(x);
    
    write(1, "\n", 1);

    print_bits(swap_bits(x));
    printf("\n%d", swap_bits(x));
    return (0);
}