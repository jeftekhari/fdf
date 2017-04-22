/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 16:15:40 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/16 19:17:33 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		my_key_funct(int keycode, t_board *board)
{
	printf("key event %i\n.", keycode);
	if (keycode == 53)
	{
		mlx_destroy_window(board->mlx_ptr, board->win_ptr);
		exit(0);
	}
	return (0);
}

