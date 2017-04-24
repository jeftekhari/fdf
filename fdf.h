/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 16:07:08 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/24 14:47:45 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include				"includes/libft/libft.h"
# include 				"includes/get_next_line/get_next_line.h"
# include				"minilibx_macos/mlx.h"
# include 				<unistd.h>
# include				<stdio.h>
# include				<stdlib.h>
# include				<sys/types.h>
# include 				<sys/stat.h>
# include				<fcntl.h>


/* Key Events */
# define KEY_RETURN		36
# define KEY_ESC		53
# define KEY_MORE_1		69
# define KEY_MORE_2		24
# define KEY_LESS_1		27
# define KEY_LESS_2		78
# define KEY_RESET		15
# define KEY_TOP		126
# define KEY_BOTTOM		125
# define KEY_LEFT		123
# define KEY_RIGHT		124
# define KEY_D			2
# define KEY_C			8

/* Pixel Size */
# define SCR_X			1080
# define SCR_Y			720
# define PIXEL_SIZE		1

/* Colors */
# define WHITE			0x00FFFFFF
# define GREEN			0x0000FF21
# define RED			0x00FF0000
# define GREY			0x00808080
# define BLUE			0x0000FFFF
# define YELLOW			0x00FCFF00


/* Errors */
# define NBR_ARGUMENTS	0
# define MALLOC_FAILED	1
# define OPEN_FAILED	2
# define END_PROGRAM	3
# define INIT_FAILED	4
# define BAD_CONTENT	5
# define EMPTY_FILE		6

typedef struct		s_point
{
	double				x;
	double				y;
	double				z;
}			t_point;

typedef struct		s_board
{
	int				offy;
	int				offx;
	int				x;
	int				y;
	int				spacex;
	int				spacey;
	int				h;
	int				w;
	t_point				**map;
	int				fd;
	int				check;
	void			*mlx_ptr;
	void			*win_ptr;
}					t_board;

void	wrong(int error, t_board *board);
void	parse(char *line, t_board *board);
int		read_board(t_board *board);
void	draw(t_board *board);
void	init(t_board *baord);
void	place_point(t_board *board);
void	draw1(t_board *board);
void	draw_xline(t_board *board, int x, int y);
void	draw_yline(t_board *board, int x, int y);
int		my_key_funct(int keycode, t_board *board);
int		shutdown(int reason, t_board *board);
int		set_points(t_board *board);

#endif
