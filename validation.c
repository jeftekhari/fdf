/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:54:20 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:54:20 by jeftekha         ###   ########.fr       */
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
