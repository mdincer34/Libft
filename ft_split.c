/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:37:51 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:54:26 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		is_word;

	is_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!is_word)
				count++;
			is_word = 1;
		}
		else
		{
			is_word = 0;
		}
		s++;
	}
	return (count);
}

static size_t	word_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**free_all(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	result = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = word_length(s, c);
			result[i] = ft_substr(s, 0, len);
			if (!result[i])
				return (free_all(result, i));
			i++;
			s += len;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
