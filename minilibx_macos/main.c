#include "mlx.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct		s_fdf
{
	void *mlx;
	void *win;
}					t_fdf;

int my_key_funct(int keycode, t_fdf *yay)
{
	if (keycode == 53)
	{
		mlx_destroy_window(yay->mlx, yay->win);
		exit(0);
	}
	printf("key event %d\n", keycode);
	return (0);
}


int main()
{
	t_fdf *yay;
	int x;
	int z;
	int keycode;

	yay->mlx = mlx_init();
	yay->win = mlx_new_window(yay->mlx, 400, 400, "mlx 42");
	x = 100;
	while (x < 200)
	{
		z = 100;
		while (z < 200)
		{
			mlx_pixel_put(yay->mlx, yay->win, x, z, 0x00FF530D);
			z++;
		}
		x++;
	}
	mlx_key_hook(yay->win, my_key_funct, yay);
	mlx_loop(yay->mlx);
}
