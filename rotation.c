/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:54:05 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:54:06 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rotate_up(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x += 1;
	fdf->view.y -= 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	rotate_down(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x -= 1;
	fdf->view.y += 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	rotate_left(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x += 1;
	fdf->view.y += 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	rotate_right(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x -= 1;
	fdf->view.y -= 1;
	parse(fdf);
	draw(mlx, fdf);
}
