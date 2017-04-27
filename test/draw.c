/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:17:10 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/09 22:43:38 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	draw_vertical_lines(t_mlx *mlx, t_fdf *fdf)
{
	int		x;
	int		y;
	int		height;
	int		width;

	height = fdf->height;
	width = fdf->width;
	y = 0;
	while (y < height - 1)
	{
		x = 0;
		while (x < width - 1)
		{
			draw_line(mlx, fdf->grid[y][x], fdf->grid[y][x + 1]);
			x++;
		}
		draw_line(mlx, fdf->grid[y][width - 1], fdf->grid[y + 1][width - 1]);
		y++;
	}
}

static void	draw_horizontal_lines(t_mlx *mlx, t_fdf *fdf)
{
	int		x;
	int		y;
	int		height;
	int		width;

	height = fdf->height;
	width = fdf->width;
	x = 0;
	while (x < width - 1)
	{
		y = 0;
		while (y < height - 1)
		{
			draw_line(mlx, fdf->grid[y][x], fdf->grid[y + 1][x]);
			y++;
		}
		draw_line(mlx, fdf->grid[height - 1][x], fdf->grid[height - 1][x + 1]);
		x++;
	}
}

void		draw(t_mlx *mlx, t_fdf *fdf)
{
	draw_vertical_lines(mlx, fdf);
	draw_horizontal_lines(mlx, fdf);
}
