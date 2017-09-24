/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 01:01:30 by mmthombe          #+#    #+#             */
/*   Updated: 2017/09/24 02:09:01 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		word_count;

	i = 0;
	if (s == NULL)
		return (NULL);
	word_count = ft_wordcount((char *)s, c);
	if (!(str = (char **)malloc(sizeof(*str) * (word_count + 1))))
		return (NULL);
	if (str[0] == '\0')
		str[i] = ft_strsub((char *)s, 0, ft_wordlen((char *)s, c));
	while (word_count-- && s[0] != '\0')
	{
		while (*s == c && *s)
			s++;
		str[i] = ft_strsub((char *)s, 0, ft_wordlen((char *)s, c));
		s = s + ft_wordlen((char *)s, c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
