/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_print_color_to.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 15:47:10 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/21 15:47:13 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_set_print_color_to(int color)
{
	ft_putstr("\033[");
	ft_putnbr(color);
	ft_putchar('m');
}
