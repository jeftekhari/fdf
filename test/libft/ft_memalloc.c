/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:41:40 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 21:53:48 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	ft_bzero(result, size);
	return ((void *)result);
}
