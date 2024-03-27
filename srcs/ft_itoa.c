/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:03:01 by knacer            #+#    #+#             */
/*   Updated: 2023/11/08 11:23:07 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnbr(long n)
{
	int	cpt;

	cpt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		cpt++;
		n = -n;
	}
	while (n > 0)
	{
		cpt++;
		n = n / 10;
	}
	return (cpt);
}

char	*convert_nbr_to_str(char *s, long n)
{
	int	len_s;
	int	i;
	int	f;

	len_s = ft_countnbr(n);
	f = len_s;
	i = 0;
	if (n == 0)
		s[i] = '0';
	else if (n < 0)
	{
		s[i] = '-';
		n = -n;
	}
	while (n > 0 && len_s > i)
	{
		len_s--;
		s[len_s] = n % 10 + '0';
		n = n / 10;
	}
	s[f] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		len_str;
	char	*p;

	nbr = n;
	len_str = ft_countnbr(nbr);
	str = (char *)malloc(len_str + 1 * sizeof(char));
	if (!str)
		return (NULL);
	p = convert_nbr_to_str(str, nbr);
	return (p);
}
// #include<stdio.h>
// int main()
// {
// 	int n = -2147483648;
// 	printf("%s", ft_itoa(n));
// }
