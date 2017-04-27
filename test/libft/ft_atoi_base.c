/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:03:30 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/25 22:45:29 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_base(char const *str, int base)
{
	int			result;
	char		sign;
	char const	*x;

	result = 0;
	sign = '+';
	str = ft_skip_spaces(str);
	if (*str == '-' || *str == '+')
		sign = *(str++);
	while ((x = ft_memchr(ALPHANUMS, ft_tolower(*(str++)), base)) != NULL)
		result = result * base + (x - ALPHANUMS);
	return ((sign == '+') ? result : -result);
}
