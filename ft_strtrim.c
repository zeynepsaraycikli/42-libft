/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 01:33:08 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 12:42:26 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (len > i && ft_strchr(set, s1[len - 1]))
	{
		len--;
	}
	return (ft_substr(s1, i, len - i));
}
