/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:31:14 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 15:09:49 by jeftekha         ###   ########.fr       */
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
	mlx_string_put(mlx->mlx, mlx->window, mlx->width - 160, 5, 0x00FFFFFF,
			"FDF ~ JEFTEKHA");
	mlx_string_put(mlx->mlx, mlx->window, mlx->width - 200, 30, 0x00FFFFFF,
			"ARROW KEYS TO MOVE");
	mlx_string_put(mlx->mlx, mlx->window, mlx->width - 190, 55, 0x00FFFFFF,
			"W~A~S~D TO ROTATE");
	draw_vertical_lines(mlx, fdf);
	draw_horizontal_lines(mlx, fdf);
}
