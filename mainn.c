/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:29:17 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/15 03:22:09 by acioalai         ###   ########.fr       */
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

		char	s[] = "abcdef";
		char	s1[] = "abcdef";
		ft_memmove(s + 1, "abcdef", 5);
		puts(s);	
		puts(memmove(s1 + 1, "abcdef", 5));

		puts(ft_strjoin("afara ","este frig"))
		q
		printf("\n%zu", ft_strlen(ft_strjoin("afara ","este frig")));

		puts("               acasa         ");
		puts(ft_strtrim("               acasa       i  "));
*/		char	s[100] = "**a********matai";
		char	**matrix;
		int		i,n;

		puts(s);
		matrix = ft_strsplit(s, '*');
		i = 0;
		
		while (matrix[i] != '\0')
		{
			printf("%d ", i);
			printf("%s",matrix[i]);
			i++;
		}

			printf("%s",matrix[i]);
		printf("\n	%d	\n", i);
/*		
		char **tt;

		int	 temp;

		tt = ft_strsplit("*coucou", '*');
		puts(*tt);
		temp = strcmp(tt[0], "coucou");
		printf("%d", temp);



		int	n;
		int z;
		char	test[40] = "ce";
		char	test2[40] = "ce";
		n = ft_strlcat(test, "acasa", 7);
		printf("\n%d\n", n);
		puts(test);
		z = strlcat(test2, "acasa", 7);
		printf("\n%d\n", z);
		puts(test2);
		
//	puts(ft_strsub("je serai", 8, 8)); 
//	puts("je serai");

	char buf[7];
	int		i;
	i = 0;
	memset(buf, 33, 6);
	strncpy(buf, "abc", 6);
 while (i < 6)	
 {	write(1, &buf[i],1);
	i++; 
 }
*/
	return (0);
}
/*

#include <string.h>

void    *ft_memchr(void const *s, int c, size_t n)
{
	size_t              i;
	const unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}*/
