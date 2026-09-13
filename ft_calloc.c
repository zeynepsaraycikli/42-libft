/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 22:28:46 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 12:06:50 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	if (nmemb != 0 && ((size) > (((size_t)-1) / nmemb)))
		return (NULL);
	a = malloc(nmemb * size);
	if (!a)
	{
		return (NULL);
	}
	ft_bzero(a, nmemb * size);
	return (a);
}
