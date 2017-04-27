/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 21:34:24 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 23:08:13 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, const void *s2, size_t n)
{
	unsigned char const	*s3;
	unsigned char const	*s4;

	s3 = (unsigned char const *)s1;
	s4 = (unsigned char const *)s2;
	while (n)
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
		if (n)
		{
			s3++;
			s4++;
		}
		n--;
	}
	return (0);
}
