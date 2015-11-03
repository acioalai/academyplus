/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:00:05 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/03 19:34:57 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int		ft_memcmp(const void *s1, const void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s + i));
		i++;
	}
	return (0);
}
