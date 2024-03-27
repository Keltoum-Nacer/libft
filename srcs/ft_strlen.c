/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:36:59 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 15:08:26 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char *s = NULL;
// 	printf("%zu \n",ft_strlen(s));
//    printf("%zu", strlen(s));
// }