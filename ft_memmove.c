/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:46:44 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:48:13 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

static int	ft_check_overlap(void *dst, const void *src)
{
	if (dst < src)
		return (1);
	else if (src < dst)
		return (2);
	return (0);
}

static void	*ft_logic(char *dst, char *src, size_t len, int direction)
{
	size_t	i;

	i = 0;
	if (direction == 1)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (len--)
			dst[len] = src[len];
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	int		direction;

	dest = (char *)dst;
	source = (char *)src;
	if (!(dst || src || len))
		return ((void *)0);
	direction = ft_check_overlap(dest, source);
	if (!direction)
		return (dst);
	ft_logic(dest, source, len, direction);
	return (dst);
}
