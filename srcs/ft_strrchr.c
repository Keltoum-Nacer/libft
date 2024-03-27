/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:13:16 by knacer            #+#    #+#             */
/*   Updated: 2023/11/24 18:46:49 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*r;

	i = 0;
	r = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			r = (char *)s + i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (r);
}
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char *s = NULL ;
 	char c = 'a';
 	printf("%s",ft_strrchr(s, c)); 
 }
