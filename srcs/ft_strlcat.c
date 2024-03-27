/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:20:06 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 17:02:45 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	y;

	y = ft_strlen(src);
	if (!dest && size == 0)
		return (size + y);
	x = ft_strlen(dest);
	i = x;
	j = 0;
	if (size < x)
		return (size + y);
	if (size > 0)
	{
		while (i < size - 1 && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (x + y);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   unsigned int size = 0;
//   char dest[] = "hey";
//   char src[] = "nacer";
//   size_t a;
//   a = ft_strlcat(dest, src, size);
//   printf("a ->  %zu  dest -> %s\n",a,dest);
// }
