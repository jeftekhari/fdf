/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 15:59:55 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 22:09:12 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa_base(long n, size_t base)
{
	char	*result;
	size_t	neg;
	int		rem;
	size_t	len;

	neg = (n < 0) ? 1 : 0;
	len = ft_count_digits(n, base) + 1;
	if (!(result = ft_strnew(len)))
		return (NULL);
	if (neg && ft_strncat(result, "-", 1))
		n = -n;
	if (n == 0 && ft_strncat(result, "0", 1))
		return (result);
	while (n != 0)
	{
		rem = n % (long)base;
		n /= (long)base;
		ft_strncat(result, &HEXNUMS[rem], 1);
	}
	result[len] = 0;
	if (neg && ft_strrev(++result))
		return (--result);
	return (ft_strrev(result));
}
