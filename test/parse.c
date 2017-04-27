/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:15:51 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/09 22:48:07 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#define INIT_X	700
#define INIT_Y	200

void	parse(t_fdf *fdf)
{
	int		x;
	int		y;

	fdf->grid = (t_point **)malloc(sizeof(t_point *) * fdf->height);
	y = 0;
	while (y < fdf->height)
	{
		fdf->grid[y] = (t_point *)malloc(sizeof(t_point) * fdf->width);
		x = 0;
		while (x < fdf->width)
		{
			fdf->grid[y][x].x = (x - y) * fdf->view.x + INIT_X + fdf->pos.x;
			fdf->grid[y][x].y = (x + y) * fdf->view.y + INIT_Y -
								(fdf->input[y][x] * fdf->depth) + fdf->pos.y;
			x++;
		}
		y++;
	}
}
