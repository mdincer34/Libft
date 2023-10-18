/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:40:02 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:26:27 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*res;
	char	*source;

	if (!(dst || src))
		return (dst);
	source = (char *)src;
	res = (char *)dst;
	i = 0;
	while (i < n)
	{
		res[i] = source[i];
		i++;
	}
	return (res);
}
