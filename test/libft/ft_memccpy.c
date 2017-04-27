/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:30:34 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 21:46:52 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	unsigned char		*dst_cpy;
	unsigned char const	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char const *)src;
	while (n--)
	{
		if ((*dst_cpy++ = *src_cpy++) == (unsigned char)c)
			return ((void *)dst_cpy);
	}
	return (NULL);
}
