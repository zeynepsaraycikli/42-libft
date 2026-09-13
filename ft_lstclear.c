/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 21:24:38 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 12:53:36 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		i = ((*lst)->next);
		if ((*lst)->content)
			del((*lst)->content);
		free(*lst);
		*lst = i;
	}
}
