/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:42:10 by knacer            #+#    #+#             */
/*   Updated: 2023/11/13 16:52:41 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

// #include<stdio.h>
// int main()
// {
// 	t_list *head = ft_lstnew("first");
//     t_list *second = ft_lstnew("second");
//     ft_lstadd_front(&head, second);
//     t_list *current = head;
//     while (current)
//     {
//         printf("%s\n", (char *)(current->content));
//         current = current->next;
//     }
// }
