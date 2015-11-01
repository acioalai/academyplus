/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 13:04:12 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/01 16:33:19 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *str1, const char *str2);
char	*ft_strncpy(char *str1, char *str2, size_t n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char    *ft_strnstr(const char *s1, const char *s2, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int		ft_isalnum(int c);
int     ft_isascii(int c);
int		ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strdup(const char *s1);


#endif
