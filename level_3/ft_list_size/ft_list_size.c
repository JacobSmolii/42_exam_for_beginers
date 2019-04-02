/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:29:40 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/15 19:53:53 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*add_list(t_list *list, void *content)
{
	t_list *tmp;
	t_list *new;

	if (list == NULL)
	{
		new = (t_list *)malloc(sizeof(t_list *));
		new->data = (int*)content;
		new->next = NULL;
		return (new);
	}
	tmp = list;
	new = (t_list *)malloc(sizeof(t_list *));
	new->data = (int*)content;
	new->next = NULL;
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
	t_list	*tmp;

	i = 1;
	list = NULL;
	tmp = list;
	while (i <= ac)
	{
		list = add_list(list, (av[i]));
		i++;
	}

	x = ft_list_size(list);
	printf("num of lists: %d\n", x);

	// t_list	*list;
	// list = NULL;
	// list = add_list(list, 5);
	// list = add_list(list, 4);
	// list = add_list(list, 3);
	// list = add_list(list, 2);
	// list = add_list(list, 1);

	// while (list)
	// {
	// 	printf("%d->", (int)list->data);
	// 	list = list->next;
	// }
	// printf("NULL\n");
	return (0);
}
