/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:19:50 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/03 21:39:58 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int len;

	len = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		len++;
	}
	return (len);
}

t_list	*add_list(t_list *list, void *data)
{
	t_list	*tmp;
	t_list	*new;

	if (list == NULL)
	{
		new = (t_list *)malloc(sizeof(t_list *));
		new->next = NULL;
		new->data = (int *)data;
		return (new);
	}
	tmp = list;
	new = (t_list *)malloc(sizeof(t_list *));
	new->next = NULL;
	new->data = (int *)data;
	while (list->next)
		list = list->next;
	list->next = new;
	return (tmp);
}

int		main(int ac, char **av)
{
	int		i;
	int		x;
	t_list	*list;

	list = NULL;
	i = 1;
	while (i <= ac)
	{
		list = add_list(list, av[i]);
		i++;
	}

	x = ft_list_size(list);

	printf("%d\n", x);

	return (0);
}

