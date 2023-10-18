/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudincer <mudincer@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:39:20 by mudincer          #+#    #+#             */
/*   Updated: 2023/10/18 12:53:14 by mudincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0 || n < 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	temp;

	temp = n;
	len = ft_numlen(temp);
	if (n < 0)
	{
		len++;
		temp = -temp;
	}
	result = ft_calloc(sizeof(char), len + 1);
	if (!result)
		return ((void *)0);
	result[len] = '\0';
	while (temp > 0)
	{
		result[--len] = temp % 10 + 48;
		temp /= 10;
	}
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	return (result);
}
