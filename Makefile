all: 
	gcc  main.c fdf.h parsing.c tools.c hook.c draw.c includes/get_next_line/get_next_line.c includes/libft/libft.a -lmlx -Lminilibx_macos -framework OpenGL -framework AppKit -g
