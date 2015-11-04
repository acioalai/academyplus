/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 08:10:31 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/04 08:02:17 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	if (len == 0)
		return (b);
	temp = (unsigned char*)b;
	i = 0;
	printf("before while\n");
	while (i <= len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
