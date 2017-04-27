/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 06:04:02 by matias            #+#    #+#             */
/*   Updated: 2016/09/23 22:22:04 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	if (!*big && !*little)
		return ("");
	while (*big)
	{
		if (len < strlen(little))
			break ;
		if (ft_strlen(big) < ft_strlen(little))
			break ;
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
