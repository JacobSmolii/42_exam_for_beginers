/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:26:54 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/15 20:20:05 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list		*next;
	void				*data;
}					t_list;

int		ft_list_size(t_list *begin_list);

# endif
