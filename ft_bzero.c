/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:35:51 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:25:29 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*res;

	res = s;
	if (!n)
		return ;
	i = 0;
	while (i < n)
	{
		res[i] = 0;
		i++;
	}
}
