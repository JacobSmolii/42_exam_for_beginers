/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:17:36 by vsmolii           #+#    #+#             */
/*   Updated: 2019/04/15 19:06:41 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRACKETS_H
#define BRACKETS_H

#include <unistd.h>

typedef struct	s_brackets
{
	int		bracket;
	int		square_br;
	int		braces;

	int		close_bracket;
	int		close_square_br;
	int		close_braces;
}				t_brackets;

void	data_init(t_brackets *data);
int		brackets(char *str);



#endif
