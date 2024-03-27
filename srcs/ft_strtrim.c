/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:19:21 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 13:41:37 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (check_set(s1[i], set) == 0)
		i++;
	if (i == ft_strlen(s1))
	{
		str = ft_strdup("");
		return (str);
	}
	while (check_set(s1[j - 1], set) == 0)
		j--;
	str = ft_substr(s1, i, j - i);
	return (str);
}

// #include<stdio.h>
// int main()
// {
// 	char *s1 = NULL ;
// 	char s2[] = " a,";
// 	printf("%s",ft_strtrim(s1, s2));
// }
