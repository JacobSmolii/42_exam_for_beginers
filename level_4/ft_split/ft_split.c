/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 17:07:50 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/12 19:42:31 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		space_skip(char c)
{
	return (c > 0 && c <= 32);
}

int		count_word(char *str)
{
	int	i;
	int	j;
	int k;
	int	cnt_word;

	i = 0;
	j = 0;
	k = 0;
	cnt_word = 0;
	while (str[i] != '\0')
	{
		if (!space_skip(str[i]) && (space_skip(str[i - 1]) || i == 0))
		j = i;
		if (!space_skip(str[i]) && (space_skip(str[i + 1]) ||
												str[i + 1] == '\0'))
		k = i + 1;
		if (j < k)
		{
			cnt_word++;
			j = 0;
			k = 0;
		}
		i++;
	}
	return (cnt_word);
}

char	*create_word(char *str, int start_w, int end_w)
{
	int		i;
	char	*new_word;

	i = 0;
	new_word = (char *)malloc(sizeof(char) * ((end_w - start_w) + 1));
	while (start_w < end_w)
	{
		new_word[i] = str[start_w];
		start_w++;
		i++;
	}
	new_word[i] = '\0';
	return (new_word);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		t;
	int		nbr_word;
	char	**rest;

	i = 0;
	j = 0;
	k = 0;
	t = 0;
	nbr_word = count_word(str);
	rest = (char **)malloc(sizeof(char *) * (nbr_word + 1));
	while (str[i] != '\0' && t < nbr_word)
	{
		while (space_skip(str[i]))
			i++;
		j = i;
		while (!space_skip(str[i]))
			i++;
		k = i;
		rest[t] = create_word(str, j, k);
		t++;
		i++;
	}
	rest[t] = NULL;
	return (rest);
}

int		main(void)
{
	char	**rest;
	char	*str = "a abc s def wow";
	int		x;

	x = count_word(str);
	printf("%d\n", x);

	rest = ft_split(str);
	while (*rest != NULL)
	{
		printf("%s\n", *rest);
		rest++;
	}
	return (0);
}
