/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:46:46 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 15:24:07 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dest_len < size)
	{
		while (i < (size - dest_len - 1) && src[i] != '\0')
		{
			dst[i + dest_len] = src[i];
			i++;
		}
		dst[i + dest_len] = '\0';
		return (dest_len + src_len);
	}
	return (size + src_len);
}
