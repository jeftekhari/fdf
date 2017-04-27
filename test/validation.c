/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:23:06 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/03 16:09:53 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	validate_num_args(int argc)
{
	if (argc != 2)
	{
		ft_puterr("You didn't pass the right number of arguments.");
		ft_puterr("Usage: ./fdf file.fdf");
		exit(0);
	}
}
