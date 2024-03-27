/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:25:01 by knacer            #+#    #+#             */
/*   Updated: 2023/11/13 18:11:59 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// void	delete(void *content)
// {
// 	free(ft_strdup(content));
// }
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		if (lst -> content)
		{
			del(lst -> content);
		}
		free (lst);
	}
}

// int main()
// {
// 	t_list *node = ft_lstnew("hello, world");
// 	ft_lstdelone(node, delete);
// }
