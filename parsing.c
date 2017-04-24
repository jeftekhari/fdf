/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 12:43:23 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/18 10:18:14 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		set_points(t_board *board)
{
	int ret;
	int i = 0;
	int h = 0;
	char *line = NULL;
	char **str;

	if (!(board->map = ft_memalloc(sizeof(t_point*) * board->h)))
		wrong(MALLOC_FAILED, board);
	while (i < board->h)
		if (!(board->map[i++] = ft_memalloc(sizeof(t_point) * board->w)))
			wrong(MALLOC_FAILED, board);
	i = 0;
	while ((ret = get_next_line(board->fd, &line)) >= 0)
	{
//		if (i == 0 && ret == 0)
//			wrong (EMPTY_FILE, board);
		if (ret == 0)
			return (0);
		str = ft_strsplit(line, ' ');
		while (str[i + 1] && i <= board->w)
		{
			board->map[h][i].z = ft_atoi(str[i]);
			i++;
		}
		i = 0;
		h++;
	}
	ft_strdel(&line);
	return (0);
}		

void	parse(char *line, t_board *board)
{
	int		i = 0;
	char	**str;

	board->w = 1;
	str = ft_strsplit(line, ' ');
	while (str[i + 1])
	{
//		board->map[y][i] = ft_atoi(str[i]);
		i++;
		board->w++;
	}
}


int		read_board(t_board *board)
{
	int		ret;
	char	*line = NULL;
	int		i = 0;
	
	while ((ret = get_next_line(board->fd, &line)) >= 0)
	{
		if (i == 0 && ret == 0)
			wrong(EMPTY_FILE, board);
		if (ret == 0)
			return (0);
		printf("%s.\n", line);
		parse(line, board);
		i++;
		board->h++;
	}
	close(board->fd);
	return (0);
}
