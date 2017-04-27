/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 22:29:13 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 20:48:01 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = ft_strlen(s) - 1;
	if (str[i + 1] == c)
		return (&str[i + 1]);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
