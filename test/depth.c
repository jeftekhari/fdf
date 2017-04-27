/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   depth.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:47:03 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/09 22:00:52 by mfernand         ###   ########.fr       */
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
