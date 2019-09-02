/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:50:02 by vsmolii           #+#    #+#             */
/*   Updated: 2019/02/21 20:25:47 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;

	max = tab[0];
	i = 0;
	if (tab == NULL)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int		main()
{
	unsigned int len;
	int arr[] = {23, 6, 3, 5, 9, 7, 1, 8, 4, 5};
	len = 10;

	printf("%d\n", max(arr, len));
	return (0);
}
