/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 11:53:19 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/14 18:04:25 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   size_t	ft_strlcat(char *dst, const char *src, size_t size)
   {
   return (ft_strlen(ft_strncat(dst, src, size)));
   size_t	len;
   len = strlen(dst);
   if (len < size - 1)
   return(len + strlcpy(dst + len,src, size - len));
   else
   return(len + strlen(src));
   }*/

size_t	ft_strlcat_gresit(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	s1_end = i;
	while (src[i - s1_end] && i < size - 1)
	{
		dst[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dst[i] = '\0';
	return (s1_end + ft_strlen(src));
}
