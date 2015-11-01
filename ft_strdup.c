/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 16:14:04 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/01 17:00:22 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!(s2 = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1))))
		return (NULL);
	else
	{
		ft_strcpy(s2, s1);
		return (s2);
	}
}
