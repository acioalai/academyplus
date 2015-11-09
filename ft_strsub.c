/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 08:21:54 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/09 08:47:32 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return(NULL);
	else
		if (substr == NULL)
			return (NULL);	
	else
	{
		str = (char *)malloc(sizeof(char) * len + 1);
		str = ft_strncpy(str, &s[start], len);
		str[len+1] = '\0';
	}
	return (str);
}
