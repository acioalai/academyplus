/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 08:52:13 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/14 16:29:18 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_words_nbr(const char *s, char c)
{
	int		nbr;
	int		i;
	int		k;
	
	nbr = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] != '\0') && (s[i] == c))
			i++;
		k = 0;
		while ((s[i] != '\0') && (s[i] != c))
		{
			i++;
			k++;
		}
		if (k != 0)
			nbr++;
	}
	return (nbr);
}

char	**ft_malloc(const char *s,	int nbr)
{
	char	**str;
	int		i;
	
	str = (char **)malloc(sizeof(char *) * nbr + 1);
	i = 0;
	while (i < nbr)
	{
		str[i] = (char *)malloc(sizeof(char) * ft_strlen(s));
		i++;	
	}
	return(str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		k;
	int		word_nbr;
	int		p;

	if (s == NULL)
		return(NULL);
	word_nbr = ft_words_nbr(s, c);
	printf("%d", word_nbr);
	matrix = ft_malloc(s, word_nbr);
	p = 0;
	k = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		matrix[p][k] = s[i];
		i++;
		k++;
		if (s[i] == c)
		{
			matrix[p][k] = '\0';
			p++;
			k = 0;
		}
	}
	i = 0;
	while (matrix[i])
		i++;
	return(matrix);
}
