/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 08:21:54 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/09 09:25:29 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	
	if (s)
	//	return(NULL);
//	else
	{
		str = (char *)malloc(sizeof(char) * len + 1);
		printf("lungimea sirului creat %zu", ft_strlen(str));
		puts(s);
		i = start;
		while ((s[i] != '\0') && (i <= len))
		{
			printf("%d\n", i );
			str[i] = s[i];
			i++;
		}
		//str = ft_strncpy(str, (char *)s[start], len);
		str[i] = '\0';
	}
	puts(str);
	return (str);
}
