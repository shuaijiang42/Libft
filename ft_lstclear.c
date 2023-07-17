/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:11:02 by shujiang          #+#    #+#             */
/*   Updated: 2023/02/08 20:57:54 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*successor;

	node = *lst;
	successor = NULL;
	while (node != NULL)
	{
		successor = node -> next;
		del(node->content);
		free(node);
		node = successor;
	}
	*lst = NULL;
}
/*
int main()
{
	t_list *lst;

	lst = ft_lstnew(ft_strdup("hello"));
	ft_lstclear(&lst, free);

}
*/