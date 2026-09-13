/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zesarayc <zesarayc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 04:53:53 by zesarayc          #+#    #+#             */
/*   Updated: 2026/09/03 22:12:38 by zesarayc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;
	size_t	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static	void	*free_all(char **res, size_t j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
	return (NULL);
}

static char	**ft_fillword(char **res, char *str, char c)
{
	int	i;
	int	start;
	int	start_word;

	i = 0;
	start = 0;
	start_word = 0;
	// "1 2  13   16       7"
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
		{
			start = i;
		}
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			res[start_word] = ft_substr(str, start, i - start + 1);
			if (!res[start_word])
				return (free_all (res, start_word));
			start_word++;
		}
		i++;
	}
	res[start_word] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**splt;

	if (!s)
		return (NULL);
	i = count_words(s, c);
	splt = (char **)malloc(sizeof(char *) * (i + 1));
	if (!splt)
		return (NULL);
	splt = ft_fillword(splt, (char *)s, c);
	if (!splt)
		return (NULL);
	return (splt);
}
