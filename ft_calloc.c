/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:23:28 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:44:24 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	i;

	res = (void *)malloc(count * size);
	if (!res)
		return (res);
	i = -1;
	while (++i < count * size)
		((char *)res)[i] = 0;
	return (res);
}
