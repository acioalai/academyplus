/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 11:06:01 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/07 02:47:55 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= (ft_strlen(s) + 1))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		else
			i++;
	}
	return (NULL);
}
