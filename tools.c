/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:06:41 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/24 15:22:02 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			shutdown(int reason, t_board *board)
{
	ft_memdel((void*)&board);
	exit(reason);
}

void		wrong(int error, t_board *board)
{
	if (error == 0)
		ft_putstr("Invalid # of Args.\n");
	if (error == 1)
		ft_putstr("Malloc Failed.\n");
	if (error == 2)
		ft_putstr("Open Failed.\n");
	if (error == 3)
		ft_putstr("End of Program.\n");
	if (error == 4)
		ft_putstr("mlx_init() failed.\n");
	if (error == 5)
		ft_putstr("Bad Content File.\n");
	if (error == 6)
		ft_putstr("Empty File.\n");
	shutdown(0, board);
}


void	calc_center(t_board *board)
{
	int scrx = 0;
	int scry = 0;
	int x = 0;
	int y = 0;

	scrx = abs(SCR_X / 2);
	scry = abs(SCR_Y / 2);
	x = abs(board->w / 2);
	y = abs(board->h / 2);
	board->mid_x = (scrx + x);
	board->mid_y = (scry + y);
}
