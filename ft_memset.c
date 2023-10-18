/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:30:04 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:27:09 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*result;
	size_t			i;

	result = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		result[i] = (unsigned char)c;
		i++;
	}
	return (result);
}
