/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:53:25 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:53:26 by jeftekha         ###   ########.fr       */
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
