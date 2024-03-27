/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:19 by knacer            #+#    #+#             */
/*   Updated: 2023/11/14 21:43:12 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include<stdio.h>
// #include<fcntl.h>
// int main()
// {
// 	int fd = open("test.v", O_CREAT | O_WRONLY);
// 	printf("the file test.v is %i\n", fd);
// 	ft_putstr_fd("hello", fd);
// }
