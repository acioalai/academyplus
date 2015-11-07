/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 08:10:31 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/07 00:36:49 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	if (len == 0)
		return (b);
	temp = (unsigned char*)b;
	i = 0;
	while (i <= len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
