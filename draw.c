/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:07:43 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/22 13:20:34 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw_yline(t_board *board, int x, int y, int color)
{
	int i = 0;
	int n = 0;
	int dx;
	int dy;
	int x_new;
	int y_new;
	int steps;

	dx = abs((x + x) - x);
	dy = abs((y + y) - y);
	x_new = x;
	y_new = y;
	if (dx > dy)
		steps = dx;
	else
		steps = dy;
	mlx_pixel_put(board->mlx_ptr, board->win_ptr, x_new, y_new, color);
	while (i < board->w)
	{
		while (n < steps)
		{
			y_new = y_new + 1;
			mlx_pixel_put(board->mlx_ptr, board->win_ptr, x_new, y_new, color);
			n++;
		}
		n = 0;
		i++;
	}
}

void		draw_xline(t_board *board, int x, int y, int color)
{
	int i = 0;
	int n = 0;
	int dx;
	int dy;
	int x_new;
	int y_new;
	int steps;

	dx = abs((x + x) - x);
	dy = abs((y + y) - y);
	x_new = x;
	y_new = y;
	if (dx > dy && board->check != 1)
	{
		steps = dx;
		board->check = 1;
	}
	else
		steps = dy;
	mlx_pixel_put(board->mlx_ptr, board->win_ptr, x_new, y_new, color);
	while (i < board->w)
	{
		while (n < steps)
		{
			x_new = x_new + 1;
			mlx_pixel_put(board->mlx_ptr, board->win_ptr, x_new, y_new, color);
			n++;
		}
		n = 0;
		i++;
	}
}
	

void		draw(t_board *board)
{
	int w = 0;
	int y = 0;
	int x = 0;
	int h = 0;

	board->offx = SCR_X / board->w - 10;
	board->offy = SCR_Y / board->h - 10;
	mlx_string_put(board->mlx_ptr, board->win_ptr, 5, (SCR_Y - 25), GREEN, "FDF ~ JEFTEKHA");	
	y = board->offy / 2;
	while (h < board->h)
	{
		x = board->offx / 2;
		while (w < board->w)
		{
			if (board->map[h][w] == 10)
			{
//				mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, GREEN);
				draw_xline(board, x, y, GREEN);
				draw_yline(board, x, y, GREEN);
			}
			else
			{
//				mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, RED);
				draw_xline(board, x, y, RED);
				draw_yline(board, x, y, RED);
			}
			x += board->offx;
			w++;
		}
		y += board->offy;
		w = 0;
		h++;
	}
}
