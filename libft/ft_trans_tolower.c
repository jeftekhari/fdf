/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trans_tolower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:48:27 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:48:28 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trans_tolower(char *c)
{
	if (!c)
		return ;
	*c = ft_tolower((int)*c);
}