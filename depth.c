/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   depth.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:31:03 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 15:07:23 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	depth_up(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->depth += 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	depth_down(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->depth -= 1;
	parse(fdf);
	draw(mlx, fdf);
}
