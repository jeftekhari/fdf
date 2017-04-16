/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:06:41 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/14 13:11:37 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		wrong(int error)
{
	if (error == 0)
		ft_putstr("Invalid # of Args.\n");
	if (error == 1)
		ft_putstr("Malloc Failed.\n");
	if (error == 2)
		ft_putstr("Open Failed.\n");
	if (error == 3)
		ft_putstr("End of Program.\n");
	if (error == 4)
		ft_putstr("mlx_init() failed.\n");
	if (error == 5)
		ft_putstr("Bad Content File.\n");
	if (error == 6)
		ft_putstr("Empty File.\n");
	exit(0);
}