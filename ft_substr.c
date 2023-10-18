/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:07:35 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:52:27 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (ft_strlen(s) - start <= len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start || !(len))
		return (ft_strdup(""));
	res = (char *)ft_calloc((len + 1), sizeof(char));
	if (!res)
		return (res);
	ft_strlcpy(res, (s + start), len + 1);
	return (res);
}
