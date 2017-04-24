/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:07:43 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/24 15:20:36 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		init(t_board *board)
{
	board->spacex = 5;
	board->spacey = 5;
}

void		place_point(t_board *board)
{
	int 	i;
	int	j;
	int	ori_spacex;
	int	ori_spacey;
	
	i = 0;
	ori_spacex = board->spacex;
	ori_spacey = board->spacey;
	calc_center(board);
	while (i < board->h)
	{
		j = 0;
		if (j == 0 && i == 0)
		{
			board->map[i][j].x = 0;
			board->map[i][j].y = 0;
		}
		while (j < board->w)
		{
			board->map[i][j].x = board->spacex + board->mid_x;
			board->map[i][j].y = board->spacey + board->mid_y;
			board->spacex += ori_spacex;
			j++;
		}
		i++;
		board->spacex = ori_spacex;
		board->spacey += ori_spacey;
	}
	board->spacex = ori_spacex;
	board->spacey = ori_spacey;
}
	
void		draw(t_board *board)
{
	int	i;
	int	j;


	i = 0;
	mlx_clear_window(board->mlx_ptr, board->win_ptr);
	place_point(board);
	while (i < board->h)
	{
		j = 0;
		if (j == 0 && i == 0)
			j++;
		while (j < board->w)
		{
			mlx_pixel_put(board->mlx_ptr, board->win_ptr, board->map[i][j].x, board->map[i][j].y, RED);
			draw_xline(board, i, j);
			draw_yline(board, i, j);
			j++;
		}
		i++;
	}	
}

void		draw_yline(t_board *board, int i, int j)
{
	int 	x;
	int	y;

	if (i == 0)
		return;
	y = board->map[i - 1][j].y;
	x = board->map[i][j].x;
	while (y < board->map[i][j].y)
	{
		while (board->map[i][j].z != 0 && y < board->map[i][j].y && board->map[i - 1][j].z != 0)
		{
			mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, GREEN);
			y++;
		}
		mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, RED);
		y++;
	}
}

void		draw_xline(t_board *board, int i, int j)
{
	int	x;
	int	y;

	if (j == 0)
		return;
	y = board->map[i][j].y;
	x = board->map[i][j - 1].x;
	while (x < board->map[i][j].x)
	{
		while (board->map[i][j].z != 0 && x < board->map[i][j].x && board->map[i][j - 1].z != 0)
		{
			mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, GREEN);
			x++;
		}
		mlx_pixel_put(board->mlx_ptr, board->win_ptr, x, y, RED);
		x++;
	}
}
