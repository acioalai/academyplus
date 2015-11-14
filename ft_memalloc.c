/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:20:12 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/14 17:28:10 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if ((!(str = (char *)malloc(sizeof(char) * size + 1)) || (!size)))
		return (NULL);
	ft_memset(str, '\0', size);
	return ((void *)str);
}
