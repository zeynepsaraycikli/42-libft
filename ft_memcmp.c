/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 22:17:20 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 14:33:10 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*a;

	s = (unsigned char *)s1;
	a = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n > i)
	{
		if (s[i] != a[i])
		{
			return (s[i] - a[i]);
		}
		i++;
	}
	return (0);
}
