/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 05:25:47 by mfernand          #+#    #+#             */
/*   Updated: 2016/11/03 16:16:19 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE	10000

# define SUCCESS	1
# define FAILURE	-1
# define END		0

typedef struct	s_file
{
	int				fd;
	char			*buffer;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
