/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 19:47:12 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/12 20:07:46 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

int		main(void)
{
	int x[10] = {2, 4, 6, 3, 1, 8, 9, 5, 7, 11};
	unsigned int	len = 10;
	unsigned int i = 0;

	sort_int_tab(x, len);
	while (i < len)
	{
		printf("%d\n", x[i]);
		i++;
	}
	return (0);
}
