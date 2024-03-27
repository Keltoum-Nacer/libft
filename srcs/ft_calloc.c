/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:47:43 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 13:19:18 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	char	*ptr;
	size_t	i;

	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	i = 0;
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ptr = p;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// #include<stdio.h>
// int main()
// {
// 	size_t n = 5;
// 	size_t size = sizeof(char);
// 	char *p = ft_calloc(n, size);
// 	size_t i = 0;
// 	while (i < n)
// 	{
// 		printf("%d", p[i]);
// 		i++;
// 	}
// 	// printf("%zu",SIZE_MAX);
// }
