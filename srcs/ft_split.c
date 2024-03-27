/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:46:20 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 14:25:06 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbsub(char const *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			cpt++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cpt);
}

int	count_char(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**affect_str(char **arr, int nbsub, char const *s, char c)
{
	int	len;
	int	j;
	int	i;
	int	k;

	j = 0;
	i = 0;
	while (nbsub--)
	{
		while (s[i] == c)
			i++;
		len = count_char(s + i, c);
		arr[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!arr[j])
		{
			free_arr(arr);
			return (NULL);
		}
		k = 0;
		while (k < len)
			arr[j][k++] = s[i++];
		arr[j++][k] = '\0';
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		nbsub;

	nbsub = count_nbsub(s, c);
	arr = (char **)malloc(sizeof(char *) * (nbsub + 1));
	if (!arr)
		return (NULL);
	if (affect_str(arr, nbsub, s, c) == NULL)
		return (NULL);
	return (arr);
}

// #include<stdio.h> 
// int main()
// {
// 	// char s[] = "//hello/i m/keltoum /nacer 
//	/i ///study/in /1337/coding /school";
// 	char *s = NULL;
// 	char c = '/';
// 	char **p = ft_split(s, c);
// 	int i = 0;
// 		while (p[i] != NULL)
// 		{
// 			printf("Substring %d: %s\n", i, p[i]);
// 			i++;
// 		}
// 	printf("Substring %d: %s\n", i, p[i]);
// 	}
//     return 0;
// }
