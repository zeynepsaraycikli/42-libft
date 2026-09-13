/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 00:40:39 by zesarayc          #+#    #+#             */
/*   Updated: 2026/08/21 12:10:05 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		a[j] = s[i];
		i++;
		j++;
	}
	a[j] = '\0';
	return (a);
}
