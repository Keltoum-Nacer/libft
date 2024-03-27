/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:16:21 by knacer            #+#    #+#             */
/*   Updated: 2023/11/13 14:25:25 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cpt;

	cpt = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		cpt++;
		lst = lst -> next;
	}
	return (cpt);
}

// #include<stdio.h>
// int main()
// {
// 	t_list *head = ft_lstnew("have");
// 	head -> next = ft_lstnew("a");
// 	head ->next -> next = ft_lstnew("nice");
// 	head -> next -> next -> next = ft_lstnew("day");
// 	printf("%d", ft_lstsize(head));
// }
