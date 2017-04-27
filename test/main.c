/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:27:22 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/09 20:45:16 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_fdf	*fdf;
	t_mlx	*mlx;

	validate_num_args(argc);
	fdf = init_fdf();
	read_file(argv[1], fdf);
	mlx = init_mlx();
	parse(fdf);
	draw(mlx, fdf);
	run_fdf(mlx, fdf);
	return (0);
}
