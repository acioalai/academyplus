/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 18:28:24 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/15 00:32:07 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while (n > 0)
	{
		s1[j + i] = s2[i];
		n--;
		i++;
	}
	s1[j + i] = '\0';
	return (s1);
}
