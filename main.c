/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:29:17 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/14 17:26:29 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	/*	char *s1,*s2;

		strcpy(s1,"abc");
		strcpy(s2,"abc");
		printf("%d", ft_strequ(s1,s2));	

		void	*str;
		puts(ft_memchr("abcdef",'a' , 5));

		puts(memchr("abcdef",'a' , 5));

		char	*s;
		ft_memmove(s, "acasa", 2);
		puts(s);	
		puts(memmove(s, "acasa", 2));

		puts(ft_strjoin("afara ","este frig"));
		printf("\n%zu", ft_strlen(ft_strjoin("afara ","este frig")));

		puts("               acasa         ");
		puts(ft_strtrim("               acasa       i  "));
		*/
	char	s[100] = "*******a*a*a*******a*****************";
	char	**matrix;
	int		i,n;

	puts(s);
	matrix = ft_strsplit(s, '*');
	i = 0;
	
	while (matrix[i] != '\0')
	{
		printf("%d ", i);
		puts(matrix[i]);
		i++;
	}	

	return (0);
}
