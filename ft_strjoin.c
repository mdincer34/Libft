/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:22:07 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:50:07 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)ft_calloc(len, sizeof(char));
	if (!res)
		return (res);
	ft_strlcpy(res, s1, len);
	ft_strlcat(res, s2, len);
	return (res);
}
