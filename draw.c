/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 17:07:43 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/15 21:25:01 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw(t_board *board)
{
	int i = 0;
	int y = 0;


	mlx_string_put(board->mlx_ptr, board->win_ptr, 5, (SCR_Y - 25), GREEN, "FDF ~ JEFTEKHA");	
	while (i <= 11)
	{
		while (y <= 19)
		{
			mlx_pixel_put(board->mlx_ptr, board->win_ptr, board->map[i][y], board->map[i][y], WHITE);
			y++;
		}
		i++;
	}
}
