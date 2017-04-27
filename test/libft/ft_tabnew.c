/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 15:47:53 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/24 20:26:55 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabnew(size_t size)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * size);
	if (!result)
		return (NULL);
	while (size--)
		result[size] = NULL;
	return (result);
}
