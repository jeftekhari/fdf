/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:40:28 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/21 18:58:26 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//alright you need to do a few things.
	//create variables for "Right" and "Down" to prevent the lines from overextending
	//figure out why it's going off the screen & make sure it stops at the right point
	//iso metric time
	//


#include "fdf.h"

int		main(int ac, char **av)
{
	t_board	*board;

	if (ac != 2)
		wrong(NBR_ARGUMENTS, NULL);
	if (!(board = (t_board*)ft_memalloc(sizeof(t_board))))
		wrong(MALLOC_FAILED, board);
	if ((board->fd = open(av[1], O_RDONLY)) < 0)
		wrong(OPEN_FAILED, board);
	read_board(board);
	if ((board->fd = open(av[1], O_RDONLY)) < 0)
		wrong(OPEN_FAILED, board);
	set_points(board);
	if ((board->mlx_ptr = mlx_init()) == 0)
		wrong(INIT_FAILED, board);
	board->win_ptr = mlx_new_window(board->mlx_ptr, SCR_X, SCR_Y, "Joe's Crab Shack");
	init(board);
	ft_putnbr(board->spacey);
	place_point(board);
	draw(board);
//	draw1(board);
//	bres_main(board);
	mlx_key_hook(board->win_ptr, my_key_funct, board);
	mlx_loop(board->mlx_ptr);
	close(board->fd);
	ft_memdel((void*)&board);
	return (0);
}
