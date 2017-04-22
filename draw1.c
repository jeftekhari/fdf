/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:07:43 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/21 18:09:47 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw1(t_board *board)
{
	int w = 0;
	int y = 0;
	int x = 0;
	int h = 0;

	board->offx = SCR_X / board->w;
	board->offy = SCR_Y / board->h;
	mlx_string_put(board->mlx_ptr, board->win_ptr, 5, (SCR_Y - 25), GREEN, "FDF ~ JEFTEKHA");	
	y = board->offy / 2;
	while (h < board->h)
	{
		x = board->offx / 2;
		while (w < board->w)
		{
			if (board->map[h][w] == 10)
				mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, GREEN);
			else
				mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, RED);
			x += board->offx;
			w++;
		}
		y += board->offy;
		w = 0;
		h++;
	}
}
