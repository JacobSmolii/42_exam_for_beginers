/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:24:13 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/28 17:55:35 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int i;
	int size;
	int *base;

	i = 0;
	if (end >= start)
		size = end - start + 1;
	else
		size = start - end + 1;
	base = (int *)malloc(sizeof(int) * size);
	if (base == NULL)
		return (NULL);
	while (i < size)
	{
		base[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (base);
}

int		main(void)
{
	int start;
	int end;
	int *arr;

	start = 3;
	end = -3;
	arr = ft_range(start, end);

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
