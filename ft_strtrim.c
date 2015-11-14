/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 07:53:20 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/14 17:34:49 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	while ((s[i] != '\0') && ((s[i] == ' ')
				|| (s[i] == '\n') || (s[i] == '\t')))
		i++;
	k = ft_strlen(s) - 1;
	while ((k > 0) && ((s[k] == ' ') || (s[k] == '\n') || (s[k] == '\t')))
		k--;
	if (k != i)
		str = (char *)malloc(sizeof(char) * (k - i));
	else
		return (NULL);
	return (ft_strsub(s, i, (k - i + 1)));
}
