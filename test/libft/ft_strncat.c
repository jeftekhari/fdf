/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 02:09:09 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/22 22:50:43 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	char *temp;

	temp = s1;
	if (*s1)
		while (*++s1)
			;
	while (n && (*s1++ = *s2++))
		n--;
	if (n == 0)
		*s1 = '\0';
	return (temp);
}
