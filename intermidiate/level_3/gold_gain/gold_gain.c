/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gold_gain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:35:04 by vsmolii           #+#    #+#             */
/*   Updated: 2019/08/30 11:30:42 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>



int		gold_gain(int **mine, int n)
{
	int col;
	int	row;
	int	tmp = 0;

	col = 1;
	while (col < n)
	{
		row = 0;
		while (row < n)
		{
			if (col == 1 && mine[col][row] > tmp)
				tmp = mine[col][row];


			row++;
		}
		col++;
	}
}




int		**make_area(int *zone, int n)
{
	int		i;
	int		j;
	int		**rest;

	i = 0;
	rest = (int **)malloc(sizeof(int *) * n);
	while (i < n)
	{
		j = 0;
		rest[i] = (int *)malloc(sizeof(int) * n);
		while (j < n)
		{
			rest[i][j] = zone[i * n + j];
			j++;
		}
		i++;
	}
	return (rest);
}


int main()
{
	int		n = 3;
	int		arr[] = {1, 0, 0, 0, 3, 4, 0, 0, 0};
	int		**mine = make_area(arr, n);


	printf("%d\n", gold_gain(mine, n));
}
