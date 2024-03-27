/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:41:03 by knacer            #+#    #+#             */
/*   Updated: 2023/11/04 15:55:34 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include<stdio.h>
// #include<fcntl.h>
// int main()
// {
// 	int fd = open("testchar", O_CREAT | O_WRONLY);
// 	printf("the file testchar is %i\n", fd);
// 	ft_putchar_fd('k', fd);
// }