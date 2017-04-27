/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfernand <mfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 23:13:35 by mfernand          #+#    #+#             */
/*   Updated: 2016/09/26 21:44:08 by mfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_count;
	size_t	word_len;

	if (!s || !(result = ft_tabnew(ft_word_count(s, c) + 1)))
		return (NULL);
	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			word_len = 0;
			while (s[i + word_len] && s[i + word_len] != c)
				word_len++;
			result[word_count++] = ft_strsub(s, i, word_len);
			i += word_len;
		}
	}
	return (result);
}
