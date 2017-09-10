/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 00:48:23 by mmthombe          #+#    #+#             */
/*   Updated: 2017/06/11 11:26:53 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	while (i < (int)len && big[i] != '\0')
	{
		j = 0;
		if (little[j] == '\0')
			return ((char*)(&big[i]));
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char*)(&big[i]));
			j++;
		}
		i++;
	}
	return (0);
}
