/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:45:28 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 20:36:45 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strnstr(const char *str, const char *s, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s) == 0)
		return ((char *)str);
	if (n > 0)
	{
		while ((str[i] && s[j]) && i < n)
		{
			if (str[i] == s[j])
				j++;
			else
			{
				i = i - j;
				j = 0;
			}
			i++;
		}
		if (s[j] == '\0')
			return ((char *)&str[i - j]);
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	printf("%s",ft_strnstr("hello world", "lo wo", 9));
// }
