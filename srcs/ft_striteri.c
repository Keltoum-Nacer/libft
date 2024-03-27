/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:23:36 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 15:17:17 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include<stdio.h>
// void print_index_and_char(unsigned int index, char *c) 
// {
//     printf("Index: %u, Char: %c\n", index, *c);
// }

// int main() {
//     char s[] = "Hello, World!";
//     ft_striteri(s, print_index_and_char);
//     return 0;
// }