/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 17:17:22 by vsmolii           #+#    #+#             */
/*   Updated: 2019/03/03 18:03:25 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// void	ft_swap(int *a, int *b)//Фу-я принимает адресс, который передается как параметр
// {
// 	int	tmp;

// 	tmp = *a;
// 	*a = *b;
// 	*b = tmp;
// }

// int		main(void)//Вся эта хрень называется Dereferencing Pointer
// {					//http://www.c4learn.com/c-programming/c-dereferencing-pointer/
// 	int a = 10;
// 	int b = 5;
// 	// int x;//Дополнительный пример
// 	int *a1 = &a;//Сохраняет адресс а в а1
// 	int *b1 = &b;
// 	// x = *a1;//ложит значение a1 в х

// 	printf("a = %p, b = %p\n", &a, &b);//Покажет адресса параметров

// 	printf(" a: %d b: %d\n", a, b);

// 	printf("a1 = %p, b1 = %p\n", a1, b1);//Покажет адресса тех же параметров

// 	ft_swap(&a, &b);//здесь можно заменить ft_swap(a1, b1)

// 	printf(" a: %d b: %d\n", a, b);
// 	return (0);
// }


//Exemple with the array and pointer address

int		main(void)
{
	int A[] = {2, 4, 5, 7, 1};
	int i;
	int *p = A;
	// A++; // invalid
	// p++; // valid
	for (i = 0; i < 5; i++){
		printf("Address = %p\n", &A[i]);
		printf("Address = %p\n", A + i);
		printf("value = %d\n", A[i]);
		printf("value = %d\n", *(A + i));
	}
}

// *(A + i) is the same as A[i]
// (A + i) is the same as &A[i]

