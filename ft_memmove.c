/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:49:52 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/04 07:52:51 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	temp = (void *)malloc(len);
	i = 0;
	while (i < len)
	{
		*(temp + i) = *((unsigned char *)src + i);
		i++;
	}
	ft_memcpy(dst, src, len);
	free(temp);
	return (dst);
}
