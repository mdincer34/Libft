/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:02:29 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:26:10 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*p == (char)c)
			return (p);
		p++;
		i++;
	}
	return (0);
}
