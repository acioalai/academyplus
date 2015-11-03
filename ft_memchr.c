/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:29:29 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/03 18:54:52 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*temp;

	temp = (ft_strchr(s, c));
	if (ft_strlen(temp) < n)
		return temp;
	else
		return (NULL);
}
