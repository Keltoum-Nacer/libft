/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:29:00 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 18:23:27 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*s2;

	i = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * i + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s[] = "";
// 	printf("%s\n", ft_strdup(s));
// }
