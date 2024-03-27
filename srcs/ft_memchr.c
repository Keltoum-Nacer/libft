/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:00:37 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 17:43:18 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	x;

	i = 0;
	s = (unsigned char *)str;
	x = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s[] = "keltoum nacer";
// 	char c = '\0';
// 	size_t n = 20;
// 	printf("%s\n", ft_memchr(s, c, n));
// }
