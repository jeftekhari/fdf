/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:21:27 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 21:25:21 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char		*dst_cpy;
	char const	*src_cpy;

	if (n == 0 || dst == src)
		return (dst);
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (n--)
		*dst_cpy++ = *src_cpy++;
	return (dst);
}
