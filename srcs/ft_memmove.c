/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:19 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 16:47:27 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
		return (dest);
	}
	while (n--)
		*(d + n) = *(s + n);
	return (dest);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s[30] = "hello world";
// 	size_t n = 9;
// 	char *p = memmove(s+3, s, n);
// 	printf("%s\n", p);
// }
