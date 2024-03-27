/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:59 by knacer            #+#    #+#             */
/*   Updated: 2023/11/18 18:28:38 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// #include<stdio.h>
// #include<fcntl.h>
// int main()
// {
// 	int fd = open("testtt", O_CREAT | O_WRONLY);
// 	printf("the file test.v is %i\n", fd);
// 	ft_putendl_fd("hello", fd);
// }
