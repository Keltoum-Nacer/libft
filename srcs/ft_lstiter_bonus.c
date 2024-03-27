/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:56:54 by knacer            #+#    #+#             */
/*   Updated: 2023/11/30 20:28:04 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

#include<stdio.h>
void	print_string(void *content)
{
	printf("%s\n", (char *)content);
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}	

int main()
{
	t_list *head = ft_lstnew("hello");
	t_list *node = ft_lstnew("world");
	head -> next = node;
	node -> next = NULL;
	ft_lstiter(head, print_string);
}
