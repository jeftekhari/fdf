/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 00:09:05 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/24 20:24:13 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrtrim(char const *s)
{
	size_t	len;

	len = ft_strlen(s);
	if (len == 0)
		return (ft_strnew(0));
	len--;
	while (len && s[len] && ft_isspacelinetab(s[len]))
		len--;
	return (ft_strsub(s, 0, (len + 1)));
}
