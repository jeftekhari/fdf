/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 23:00:52 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/24 23:11:26 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;

	if (!s)
		return (NULL);
	result = ft_strdup(s);
	if (!result)
		return (NULL);
	result = ft_strltrim(result);
	if (!result)
		return (NULL);
	result = ft_strrtrim(result);
	if (!result)
		return (NULL);
	return (result);
}
