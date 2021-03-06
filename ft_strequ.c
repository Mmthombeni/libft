/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 21:17:57 by mmthombe          #+#    #+#             */
/*   Updated: 2017/09/22 21:42:40 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i] && (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	if ((unsigned char)s1[i] == (unsigned char)s2[i])
		return (1);
	else
		return (0);
}
