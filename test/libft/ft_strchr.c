/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 22:13:16 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 22:12:11 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	char *temp;

	temp = (char *)s;
	while (*temp)
		if (*temp++ == c)
			return (--temp);
	if (*temp == c)
		return (temp);
	return (NULL);
}
