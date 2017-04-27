/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 15:43:15 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/24 23:27:37 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(long n, int base, int fd)
{
	int	divisor;
	int	result;

	if (base < 2 || base > 16)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	divisor = 1;
	while (n / divisor >= base)
		divisor = divisor * base;
	while (divisor > 0)
	{
		result = (n / divisor) % base;
		ft_putchar_fd(HEXNUMS[result], fd);
		divisor = divisor / base;
	}
}
