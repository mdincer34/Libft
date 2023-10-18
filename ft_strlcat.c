/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:03:36 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/10 17:54:28 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_size;

	dest_size = 0;
	while (dest_size < dstsize && dst[dest_size])
		dest_size++;
	i = 0;
	while (i + dest_size + 1 < dstsize && src[i])
	{
		dst[i + dest_size] = src[i];
		i++;
	}
	if (dest_size + i < dstsize)
		dst[i + dest_size] = 0;
	return (dest_size + ft_strlen(src));
}
