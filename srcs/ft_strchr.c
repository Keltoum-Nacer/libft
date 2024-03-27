/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:05:34 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 17:08:46 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*r;
	int		i;

	i = 0;
	r = (char *)s;
	while (r[i] != (char)c)
	{
		if (r[i] == '\0')
			return (NULL);
		i++;
	}
	return (r + i);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//  	char *s = NULL;
// 	char c = 'l';
// 	char *p;
// 	p = ft_strchr(s, c);
// 	printf("%s\n" ,p);
// }
