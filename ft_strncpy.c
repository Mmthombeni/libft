/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 09:07:10 by mmthombe          #+#    #+#             */
/*   Updated: 2017/06/24 17:47:47 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if ((size_t)ft_strlen((char *)src) < len)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
