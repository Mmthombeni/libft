/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 21:04:13 by mmthombe          #+#    #+#             */
/*   Updated: 2017/06/11 17:59:48 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*dst;
	unsigned char			*srce;

	i = 0;
	dst = (char *)dest;
	srce = (char *)src;
	while (n < 0)
	{
		*dst = *srce;
		if (*dst == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		srce++;
		dst++;
		n--;
	}
	return (0);
}
