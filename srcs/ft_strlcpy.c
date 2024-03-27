/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:57:34 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 20:41:20 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}

// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	char dest[] = "keltoum";
// 	char src[] = "nacer";
// 	printf("%zu \n ",ft_strlcpy(dest, src, 5));
// 	printf("%s\n",dest);
// }
