/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 02:19:46 by mfernand          #+#    #+#             */
/*   Updated: 2016/10/19 15:34:45 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*copy;

	if (len > ft_strlen(str))
		len = ft_strlen(str);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_strncpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}
