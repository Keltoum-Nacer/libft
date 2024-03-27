/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:36:01 by knacer            #+#    #+#             */
/*   Updated: 2023/11/17 10:16:10 by knacer           ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */

#include"libft.h"
// #include<stdio.h>
// void *upper(void *content)
// {
// 	if (!content)
// 		return (NULL);
//     char *buff;
// 	buff = malloc(ft_strlen((char *)content));
// 	int i  = 0;
// 	while (((char *)content)[i])
// 	{
// 		buff[i] = ((char *)content)[i] - 32;
// 		i++;
// 	}
// 	return buff;

// }

// void delete_function(void *content)
// {
//     free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*result;
	t_list	*node;

	new_lst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			result = f(lst -> content);
			node = (t_list *) malloc(sizeof(t_list));
			if (!node)
			{
				ft_lstclear(&new_lst, del);
				free(result);
				return (NULL);
			}
			node -> content = result;
			node -> next = NULL;
			ft_lstadd_back(&new_lst, node);
			lst = lst -> next;
		}
	}
	return (new_lst);
}

// int main()
// {
//     t_list *head = ft_lstnew("hello");
// 	t_list *node1 = ft_lstnew("abc");
// 	t_list *node2 = ft_lstnew("test");

// 	head->next = node1;
// 	node1->next = node2;	
//     t_list *result = ft_lstmap(head, upper, delete_function);
// 	t_list *result_head = result;
//     while (result)
//     {
//         printf("%s \n", (char *)result->content);
//         result = result->next;
//     }
//     ft_lstclear(&result_head, delete_function);

//     return 0;
// }
