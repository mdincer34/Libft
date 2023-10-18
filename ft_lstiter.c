/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:28:29 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/17 17:33:58 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst)
		return ;
	current = lst;
	while (current)
	{
		next = current->next;
		f(current->content);
		current = next;
	}
}
