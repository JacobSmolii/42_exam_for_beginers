/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:17:50 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/06 14:08:16 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		check_pawn(char **table, int col, int row, int width)
{
	if (col == 0 ||col - 1 < 0 || row + 1 > width)
		return (0);
	if (table[col - 1][row - 1] == 'K' || table[col - 1][row + 1] == 'K')
		return (1);
	return (0);
}

int		check_rook(char **table, int col, int row, int width, int heigh)
{
	int y;
	int x;

	x = row;
	y = col;
	while (++col < heigh) // проверка юга
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	row = x;
	col = y;
	while (--col >= 0) // проверка севера
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	row = x;
	col = y;
	while (--row >= 0) // проверка запада
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	row = x;
	col = y;
	while (++row <= width) // проверка справа
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	return (0);
}

int		check_bishop(char **table, int col, int row, int width, int heigh)
{
	int i;
	int x;
	int y;

	x = row;
	y = col;

	i = 0;
	while (i < heigh && (col -= 1) >= 0 && (row -= 1) >= 0) // проверяю северо-запад
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col += 1) <= heigh && (row += 1) <= width) // проверяю юго-восток
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col -= 1) >= 0 && (row += 1) <= width) // проверяю северо-восток
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col += 1) <= heigh && (row -= 1) >= 0) // проверяю юго-запад
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'Q')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	return (0);
}

int		check_queen(char **table, int col, int row, int width, int heigh)
{
	int y;
	int x;
	int i;

	x = row;
	y = col;
	while (++col < heigh) // проверка юга
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	row = x;
	col = y;
	while (--col >= 0) // проверка севера
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	row = x;
	col = y;
	while (--row >= 0) // проверка запада
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	row = x;
	col = y;
	while (++row <= width) // проверка востока
	{
		if (table[col][row] == 'P' || table[col][row] == 'B' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col -= 1) >= 0 && (row -= 1) >= 0) // проверяю северо-запад
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col += 1) < heigh && (row += 1) < width) // проверяю юго-восток
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col -= 1) >= 0 && (row += 1) <= width) // проверяю северо-восток
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	i = 0;
	row = x;
	col = y;
	while (i < heigh && (col += 1) < heigh && (row -= 1) >= 0) // проверяю юго-запад
	{
		if (table[col][row] == 'P' || table[col][row] == 'R' || table[col][row] == 'R')
			break ;
		if (table[col][row] == 'K')
			return (1);
		i++;
	}
	return (0);
}

int		length_string(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*create_word(char *str)
{
	int		i;
	int		len;
	char	*new_row;

	i = 0;
	len = length_string(str);
	new_row = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		new_row[i] = str[i];
		i++;
	}
	new_row[i] = '\0';
	return (new_row);
}

void	read_symbols(char **table, char *str, int size)
{
	int col = 0;
	int row = 0;
	int width = length_string(str);
	int heigh;
	int flag;

	flag = 0;
	heigh = size;
	while (col < size)
	{
		row = 0;
		while (row < width)
		{
			if (table[col][row] == 'P')
				flag = check_pawn(table, col, row, width);
			if (table[col][row] == 'B')
				flag = check_bishop(table, col, row, width, heigh);
			if (table[col][row] == 'R')
				flag = check_rook(table, col, row, width, heigh);
			if (table[col][row] == 'Q')
				flag = check_queen(table, col, row, width, heigh);
			if (flag == 1)
				break ;
			row++;
		}
		if (flag == 1)
			break ;
		col++;
	}
	if (flag == 1)
		write(1, "Success\n", 8);
	else
		write(1, "Fail\n", 5);
}

int		main(int ac, char **av)
{
	int		i;
	int		t;
	int		size;
	char	**table;

	size = ac - 1;
	table = (char **)malloc(sizeof(char *) * (size + 1));
	i = 1;
	t = 0;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (i < ac)
	{
		table[t] = create_word(av[i]);
		i++;
		t++;
	}
	read_symbols(table, av[1], size);
	return (0);
}
