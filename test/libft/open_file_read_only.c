/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file_read_only.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 02:19:46 by mfernand          #+#    #+#             */
/*   Updated: 2016/10/19 15:35:31 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		open_file_read_only(const char *file_path)
{
	int		fd;

	if ((fd = open(file_path, O_RDONLY)) == -1)
		ft_puterr("Could not open file.");
	return (fd);
}
