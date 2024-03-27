/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:32:51 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 12:00:59 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	if (!lst)
		return (NULL);
	while (node -> next)
		node = node -> next;
	return (node);
}

// #include<stdio.h>
// int main()
// {
// 	 t_list *head = ft_lstnew("hey");
//     head->next = ft_lstnew("i am");
//     head->next->next = ft_lstnew("keltoum");
//     t_list *last = ft_lstlast(head);
//      printf("The last element contains data: %s\n"
//       ,(char *) last->content);
// }
