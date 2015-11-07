/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:29:17 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/07 01:03:19 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
/*	char *s1,*s2;

	strcpy(s1,"abc");
	strcpy(s2,"abc");
	printf("%d", ft_strequ(s1,s2));	
*/
	void	*str;
	str = ft_memalloc(88);
//	ft_strcpy(str, "abcde");
	printf("%lu", ft_strlen(str));
	puts(str);
	return (0);
}
