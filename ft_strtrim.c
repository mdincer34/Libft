/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:45:51 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:54:43 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_contains(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	check_start(char const *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_contains(s1[i], set))
		i++;
	return (i);
}

static int	check_end(char const *s1, const char *set, size_t len)
{
	int	i;

	i = len - 1;
	while (i > 0 && is_contains(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1)
		return ((void *)0);
	start = check_start(s1, set);
	end = check_end(s1, set, ft_strlen(s1));
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}
