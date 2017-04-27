/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:42:35 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/10 15:30:34 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strpos(char *str, char c)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str == c)
			return (str - start);
		str++;
	}
	return (str - start);
}

static long			ft_strtol_rec(char **str, int sign, int base)
{
	long	endptr;
	int		i;

	endptr = 0;
	while (**str && (i = ft_strpos(ALPHANUMS, ft_tolower(**str))) < base)
	{
		if (sign == -1)
			endptr = endptr * base - i;
		else
			endptr = endptr * base + i;
		(*str)++;
	}
	return (endptr);
}

long				ft_strtol(char *str, char **endptr, int base)
{
	int		sign;
	long	result;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	result = ft_strtol_rec(&str, sign, base);
	*endptr = str;
	return (result);
}
