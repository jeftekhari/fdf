/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:52:55 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:52:58 by jeftekha         ###   ########.fr       */
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
