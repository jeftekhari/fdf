/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 16:24:57 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/25 01:49:09 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(long n, size_t base)
{
	size_t	count;

	count = 0;
	n = FT_ABS(n);
	while (n != 0)
	{
		n /= (long)base;
		count++;
	}
	return (count);
}
