/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:14:32 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 21:31:41 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char		*dst_cpy;
	unsigned char const	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char const *)src;
	if (dst_cpy <= src_cpy)
	{
		while (len--)
			*dst_cpy++ = *src_cpy++;
	}
	else
	{
		dst_cpy += len;
		src_cpy += len;
		while (len--)
			*--dst_cpy = *--src_cpy;
	}
	return ((void *)dst);
}
