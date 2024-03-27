/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:41:02 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 20:40:49 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int *str = NULL;
	int c = 3;
	size_t n = 5 * 4;
	size_t i = 0;
	ft_memset(str, c, n);
	while (i < 5)
	{
		printf("%d\n ", str[i]);
		i++;
	}
}*/
