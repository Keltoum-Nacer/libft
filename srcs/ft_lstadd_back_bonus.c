/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:06:51 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 14:23:30 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && new)
	{
		temp = *lst;
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (temp -> next)
				temp = temp -> next;
			temp -> next = new;
		}
	}
}

// #include<stdio.h>
// int main()
// {
// 	t_list *head = ft_lstnew("first");
// 	t_list *new = ft_lstnew("last");
// 	ft_lstadd_back(&head, new);
// 	t_list *current = head;
// 	 while (current != NULL)
// 	 {
// 		printf("%s\n", (char *)(current ->content));
// 		current = current -> next;
// 	 }		
// }
