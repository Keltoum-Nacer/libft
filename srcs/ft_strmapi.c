/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:18:56 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 15:18:31 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			s_len;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	str = (char *)malloc((s_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include<stdio.h>
// char print_index_and_char(unsigned int index, char c) {
//     printf("Index: %u, Char: %c\n", index, c);
// 	return (c);
// }

// int main()
// {
// 	char s[] = "hello, world";
// 	char *result = ft_strmapi(s, print_index_and_char);
// 	// printf ("%s",result);
// }
