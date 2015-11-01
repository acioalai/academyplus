/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 11:48:06 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/01 12:18:16 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		index;

	i = ft_strlen(s) + 1;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)s+i);
		else
			i--;
	}	
	return (NULL);
}
