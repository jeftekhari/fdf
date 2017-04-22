/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 14:57:28 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/21 16:28:50 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

//you fucked up. you made a 2d int array for integers. but you cant set integers as an array you dumb dumb dumb idiot. make 2 single arrays, one for y's and one for x's

void	bres_draw(t_bres *bres, t_board *board)
{	
	mlx_pixel_put(board->mlx_ptr, board->win_ptr, (bres->x_new * 20)  + 100, (bres->y_new * 20) + 100, WHITE);
} 

void	bres_calc(t_bres *bres, t_board *board)
{
	int i = 1;

	bres->dx *= 5;
	while (i <= bres->dx)
	{
		while (bres->e >= 0)
		{
			bres_draw(bres, board);
			bres->y_new = bres->y_new + 1;
			bres->e = bres->e - 2 * bres->dx;
		}
		bres->x_new = bres->x_new + 1;
		bres->e = bres->e + 2 * bres->dy;
		i++;
	}
}
	
			 

void	bres_alloc(t_bres *bres, t_board *board)
{
	int i = 0;
	int y = 0;

	if (!(bres->y = ft_memalloc(sizeof(int*) * board->h)))
		wrong(MALLOC_FAILED, board);
	if (!(bres->x = ft_memalloc(sizeof(int*) * board->w)))
		wrong(MALLOC_FAILED, board);
	while (i < board->h)
	{
		bres->y[i] = i;
		while(y < board->w)
		{
			bres->x[y] = y;
			y++;
		}
		i++;
	}
}

void	bres_main(t_board *board)
{
	t_bres	*bres;
	int x = 0;
	int y = 0;

	if(!(bres = ft_memalloc(sizeof(t_board))))
		wrong(MALLOC_FAILED, board);
	bres_alloc(bres, board);
	while (y < board->h)
	{
		while (x < board->w)
		{
			bres->x_new = bres->x[x];
			bres->y_new = bres->y[y];
			bres->dx = abs(bres->x[x + 1] - bres->x[x]);
			bres->dy = abs(bres->y[y + 1] - bres->y[y]);
			bres_calc(bres, board);
			x++;
		}
		x = 0;
		y++;
	}
}
