/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:38:30 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/09 22:49:37 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	move_up(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.y -= 10;
	parse(fdf);
	draw(mlx, fdf);
}

void	move_down(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.y += 10;
	parse(fdf);
	draw(mlx, fdf);
}

void	move_left(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.x -= 10;
	parse(fdf);
	draw(mlx, fdf);
}

void	move_right(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.x += 10;
	parse(fdf);
	draw(mlx, fdf);
}
