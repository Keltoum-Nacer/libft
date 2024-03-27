/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:37:36 by knacer            #+#    #+#             */
/*   Updated: 2023/11/19 11:57:53 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

// #include<stdio.h>
// int main()
// {
// 	 int *content1 = malloc(sizeof(int));
//     *content1 = 42;
//     t_list *node1 = ft_lstnew(content1);
//     char *content2 = "hello, world";
//     t_list *node2 = ft_lstnew(content2);
//     printf("Node 1 Content: %d\n", *(int *)(node1->content));
//     printf("Node 2 Content: %s\n", (char *)(node2->content));
//     free(content1);
//     free(node1);
//     free(node2);
//     return 0;
// }
