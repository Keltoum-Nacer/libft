/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:37:38 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 10:55:18 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	check_overflow(unsigned long long x, int s)
{
	if (x > LLONG_MAX && s < 0)
		return (0);
	if (x > LLONG_MAX && s > 0)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	i;
	int	s;

	x = 0;
	s = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		s = -s;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - '0');
		if (check_overflow(x, s) < 0)
			return (check_overflow(x, s));
		i++;
	}
	return (s * x);
}

// #include <stdio.h>
// #include<string.h>
// int main()
// {
// 	// printf("hello");
// 	printf("%d \n", ft_atoi("-2147483648"));
// }