/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 21:30:28 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 12:55:11 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (content == NULL)
			return (NULL);
		nnode = ft_lstnew(content);
		if (!nnode)
		{
			del(content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nnode);
		lst = lst->next;
	}
	return (nlst);
}
