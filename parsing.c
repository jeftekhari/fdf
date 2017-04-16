/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 12:43:23 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/14 16:48:27 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	parse(char *line, t_board *board, int y)
{
	int		i = 0;
	int		z = 0;
	char	**str;

	str = ft_strsplit(line, ' ');
	while (str[i + 1])
	{
		board->map[y][z] = ft_atoi(str[i]);
		z++;
		i++;
//		printf("%s", str[i]);
	}
}


int		read_board(t_board *board)
{
	int		ret;
	char	*line = NULL;
	int		i = 0;
	int		countl = 0;

	while ((ret = get_next_line(board->fd, &line)) >= 0)
	{
		if (i == 0 && ret == 0)
			wrong(EMPTY_FILE);
		if (ret == 0)
			return (0);
		printf("%s.\n", line);
		parse(line, board, countl++);
		i++;
	}
	return (0);
}
