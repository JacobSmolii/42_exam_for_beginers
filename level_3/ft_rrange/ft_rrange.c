/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:52:15 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/27 18:23:21 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int i;
	int size;
	int	*base;

	i = 0;
	if (end >= start)
		size = end - start + 1;
	else
		size = start - end + 1;
	base = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		base[i] = end;
		if (end > start)
			end--;
		else
			end++;
		i++;
	}
	return (base);
}

int		main(void)
{
	int start;
	int end;
	int *arr;

	start = 0;
	end = -3;

	arr = ft_rrange(start, end);
	// write(1, "\n", 1);

	int i = 0;
	int size;
	if (end >= start)
		size = end - start + 1;
	else
		size = start - end + 1;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}




