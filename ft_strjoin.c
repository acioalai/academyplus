/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 07:29:48 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/10 07:47:52 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{	
	size_t	sum;
	char	*str;
	
	sum = ft_strlen(s1)+ft_strlen(s2);
	str = ft_strnew(sum);
	ft_strcpy(str, s1);
	if (!(ft_strcat(str,(char *) s2)))
		return (NULL);
	else
		return(str);
}
