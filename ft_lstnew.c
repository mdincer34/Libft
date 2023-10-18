/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:23:07 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:55:08 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!res)
		return ((void *)0);
	res->content = content;
	res->next = (void *)0;
	return (res);
}
