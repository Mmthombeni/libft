/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 00:50:56 by mmthombe          #+#    #+#             */
/*   Updated: 2017/09/24 02:08:07 by mmthombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *s, char c)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	if (ft_strstr(s, &c) == NULL)
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			cnt++;
		i++;
	}
	return (cnt);
}
