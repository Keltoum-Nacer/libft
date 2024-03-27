/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:11 by knacer            #+#    #+#             */
/*   Updated: 2023/11/18 20:27:41 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str[] = {1,3,4,3};
//    size_t n = sizeof(str);
//    size_t i;
//    i = 0;
//    ft_bzero(str, n);
// 	while (i < n)
// 	{
// 		printf("%d",str[i]);
// 		i++;
// 	}
// }