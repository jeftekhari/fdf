/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:40:28 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/14 21:57:54 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	t_board	*board;

	if (ac != 2)
		wrong(NBR_ARGUMENTS);
	if (!(board = (t_board*)ft_memalloc(sizeof(t_board))))
		wrong(MALLOC_FAILED);
	if ((board->fd = open(av[1], O_RDONLY)) < 0)
		wrong(OPEN_FAILED);
	read_board(board);
	if ((board->mlx_ptr = mlx_init()) == 0)
		wrong(INIT_FAILED);
	board->win_ptr = mlx_new_window(board->mlx_ptr, SCR_X, SCR_Y, "Joe's Crab Shack");
	draw(board);
	mlx_loop(board->mlx_ptr);
	close(board->fd);
	return (0);
}
