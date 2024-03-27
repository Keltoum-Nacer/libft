/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:33 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 14:20:45 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// void	delete(void *content)
// {
// 	free(ft_strdup(content));
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp -> next;
		del(temp -> content);
		free(temp);
		temp = next;
	}
	*lst = NULL;
}

// #include<stdio.h>
// int main()
// {
// 	t_list *head = ft_lstnew("hey");
// 	t_list *node1 = ft_lstnew("i am");
// 	t_list *node2 = ft_lstnew("keltoum");
// 	head -> next = node1;
// 	node1 -> next = node2;
// 	node2 -> next = NULL;
// 	ft_lstclear(&head, delete);
// 	printf ("%p",head);
// }
