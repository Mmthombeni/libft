/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 23:33:57 by mmthombe          #+#    #+#             */
/*   Updated: 2017/06/22 23:04:54 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	if (s1[i] == '\0')
		return (0);
	while (s1[i] != '\0' && s1[i] != (char)c)
		i++;
	if (s1[i] == (char)c)
		return (&(s1[i]));
	return (NULL);
}
