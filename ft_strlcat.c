/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 23:37:39 by mmthombe          #+#    #+#             */
/*   Updated: 2017/06/11 10:56:41 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dst);
	if (len > n)
		return (ft_strlen(src) + n);
	else
		ft_strncat(dst, src, n - len - 1);
	return (len + ft_strlen(src));
}
