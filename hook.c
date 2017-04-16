
#include "fdf.h"

int	my_key_funct(int keycode, t_board *board)
{
	if (keycode == 53)
	{
		mlx_destroy_window(board->mlx_ptr, board->win_ptr);
		exit(0);
	}
	return (0);
}
