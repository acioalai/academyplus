/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 12:48:01 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/01 13:11:47 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	if (s2[0] == '\0')
		return (char*)(s1);
	while ((i <= n) && (s1))
	{
		j = i;
		c = 0;
		while (s1[j] == s2[c])
		{
			j++;
			c++;
			if (s2[c] == '\0')
				return (char*)(&s1[i]);
		}
		i++;
	}
	return (NULL);
}
