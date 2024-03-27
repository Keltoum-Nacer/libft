/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:40:42 by knacer            #+#    #+#             */
/*   Updated: 2023/11/06 17:46:59 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}

// #include<stdio.h>
// #include<fcntl.h>
// int main()
// {
// 	int fd = open("putnbr", O_CREAT | O_WRONLY);
// 	printf("the file putnbr is %i\n", fd);
// 	ft_putnbr_fd(158, fd);
// }