/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 13:04:12 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/07 02:25:28 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

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
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s, size_t n);
int		ft_strequ(char const *s1, char const *s2);
void    ft_putnbr(int nb);
void    ft_putchar(char c);
void    *ft_memalloc(size_t size);
int     ft_atoi(const char *str);
int     ft_isprint(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
