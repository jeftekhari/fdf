/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 00:47:11 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/22 01:06:43 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t len)
{
	char *temp;

	temp = dst;
	while (len && (*dst++ = *src++))
		len--;
	while (len-- >= 2)
		*dst++ = '\0';
	return (temp);
}
