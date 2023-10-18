/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:17:31 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:49:44 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*res;

	res = (char *)ft_calloc((ft_strlen(s1) + 1), sizeof(s1[0]));
	if (!res)
		return (res);
	i = 0;
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	return (res);
}
