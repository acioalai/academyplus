/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimuresa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 17:19:36 by mimuresa          #+#    #+#             */
/*   Updated: 2015/11/14 21:19:46 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	ft_teststriter(char *c)
{
	int idx;
	
	idx = 0;
	while (c[idx] != '\0')
	{
		write(1, &c[idx], 1);
		idx++;
	}
}

void	ft_teststriteri(unsigned int i, char *c)
{
	int idx;

	i++;
	idx = 0;
	while (c[idx] != '\0')
	{
		write(1, &c[idx], 1);
		idx++;
	}
}

char	ft_teststrmap(char c)
{
	return (c+1);
}

char	ft_teststrmapi(unsigned int i, char c)
{
	i++;
	return (c - 1);
}

int main()
{
    char *large = "Foo Bar Baz";
    char *small = "Bar";
    char slt[40] = "test4all";
	char slt2[40] = "test4all";
    char scat[40] = "test";
	char scat2[40] = "test";
    char sncat[40] = "test2";
	char sncat2[40] = "test2";
    const char *s = "te4s4444t";
    unsigned char b[20] = "test";
    char bz[20] = "mihaimuresan";
	char bz2[20] = "mihaimuresan";
    int c = 'a';
    size_t l = 9;
    ft_memset(b, c, l);
    ft_bzero(bz, l);
	bzero(bz2, l);
    printf("Test \t\t ce trebuie \t\t rezultat\n");
    printf("MEMSET \t\t aaaaaaaaa \t\t %s\n", b);
    printf("BZERO \t\t %c,%c \t\t\t %c,%c\n", bz2[8], bz2[9], bz[8],bz[9]);
	const unsigned char srcmcpy[] = "mihai";
	const unsigned char srcmcpy2[] = "mihai";
	unsigned char dstmcpy[6];
	unsigned char dstmcpy2[6];
	memcpy(dstmcpy, srcmcpy, 6);
	ft_memcpy(dstmcpy2, srcmcpy2, 6);
    printf("MEMCPY \t\t %s \t\t\t %s\n", dstmcpy, dstmcpy2);
	const unsigned char srcmcc[] = "cevascris";
	const unsigned char srcmcc2[] = "cevascris";
	unsigned char dstcmcc[20];
	unsigned char dstcmcc2[20];
	memccpy(dstcmcc, srcmcc, 'v', 20);
	ft_memccpy(dstcmcc2, srcmcc2, 'v', 20);
    printf("MEMCCPY \t %s \t\t\t %s\n", dstcmcc, dstcmcc2);
	
	unsigned char dstcmcc3[20];
	unsigned char dstcmcc4[20];
	memccpy(dstcmcc3, strdup("test\200string"), '\200', 12);
	ft_memccpy(dstcmcc4, strdup("test\200string"), '\200', 12);
    printf("MEMCCPY \t %s \t\t\t %s\n", dstcmcc3, dstcmcc4);


	const unsigned char srcmm[] = "testdetest";
	unsigned char dstmm[4];
	const unsigned char srcmm2[] = "testdetest";
	unsigned char dstmm2[4];
  	printf("MEMMOVE \t %s \t\t %s\n", memmove(dstmm, srcmm, 4), 
			ft_memmove(dstmm2, srcmm2, 4));
	const unsigned char smemchr[5] = "test";
	char *ptrt =  memchr(smemchr, 'e', 5);
	char *ptrt2 = ft_memchr(smemchr, 'e', 5);
    printf("MEMCHR \t\t %s \t\t\t %s\n", ptrt, ptrt2);
    printf("MEMCMP \t\t %d \t\t\t %d\n", memcmp(ptrt, s, 5), 
			ft_memcmp(ptrt, s, 5));
	printf("STRLEN \t\t %lu \t\t\t %lu\n", strlen("mihai"), 
			ft_strlen("mihai"));
    printf("STRDUP \t\t %s \t\t\t %s\n", strdup("test"), 
			ft_strdup("test"));
	char	*srcscp1 = "MihaiMuresan";
	char	*srcscp2 = "MihaiMuresan";
	char	dstscp1[40];
	char	dstscp2[40];
   	printf("STRCPY \t\t %s \t\t %s\n", strcpy(dstscp1, srcscp1), 
			ft_strcpy(dstscp2, srcscp2));
    char	dstsncp1[40];
	char	dstsncp2[40];
	printf("STRNCPY \t %s \t\t %s\n", strncpy(dstsncp1, srcscp1, 20), 
			ft_strncpy(dstsncp2, srcscp2, 20));
    printf("STRCAT \t\t %s \t\t %s\n", strcat(scat, small), 
			ft_strcat(scat2, small));
    printf("STRNCAT \t %s \t\t %s\n", strncat(sncat, large, 5), 
			ft_strncat(sncat2, large, 5));

	char *strstrlcat1 = "Primul test string lung";
	char *strstrlcat2 = "Al doilea test";
	char *strlcat1 = "Primul test string lung";
	char *strlcat2 = "Al doilea test";
	printf("STRLCAT \t %lu \t\t\t %lu\n", strlcat(strstrlcat2, strstrlcat1, 5), 
			ft_strlcat(strlcat2, strlcat1, 5));
 	printf("STRLCAT \t %s,%s \t\t\t %s,%s\n", strstrlcat2, strstrlcat1, 
			strlcat2, strlcat1 );
	char *strstrlcat5 = "Primul test string lung";
	char *strstrlcat6 = "Al doilea test";
	char *strlcat5 = "Primul test string lung";
	char *strlcat6 = "Al doilea test";
	printf("STRLCAT \t %lu \t\t\t %lu\n", strlcat(strstrlcat6, strstrlcat5, 1), 
			ft_strlcat(strlcat6, strlcat5, 1));
 	printf("STRLCAT \t %s,%s \t\t\t %s,%s\n", strstrlcat6, strstrlcat5, 
			strlcat2, strlcat1 );
	printf("STRLCAT \t %lu \t\t\t %lu\n", strlcat(slt, large, 15), 
			ft_strlcat(slt2, large, 15));
   	printf("STRLCAT \t %s,%s \t\t\t %s,%s\n", slt, large, 
			slt2, large);
	
	
	printf("STRCHR \t\t %s \t\t %s\n", strchr(s, 't'), ft_strchr(s, 't'));
    printf("STRCHR \t\t %s \t\t\t %s\n", strchr(s, '\0'), ft_strchr(s, '\0'));
   	printf("STRRCHR \t %s \t\t\t %s\n", strrchr(s, '4'), ft_strrchr(s, '4'));
    printf("STRSTR \t\t %s \t\t %s\n", strstr(large, small), 
			ft_strstr(large, small));
    printf("STRNSTR \t %s \t\t %s\n", strnstr(large,small, 6), 
			ft_strnstr(large,small,6));
    printf("STRNSTR \t %s \t\t %s\n", strnstr(large,small, 7), 
			ft_strnstr(large,small,7));
    printf("STRCMP \t\t %d \t\t\t %d\n", strcmp("\200", "\0"), 
			ft_strcmp("\200","\0"));
    printf("STRCMP \t\t %d \t\t\t %d\n", strcmp(small,"test"), 
			ft_strcmp(small, "test"));
    printf("STRCMP \t\t %d \t\t\t %d\n", strcmp("test","test"), 
			ft_strcmp("test","test"));
    printf("STRNCMP \t %d \t\t\t %d\n", strncmp("aest", "testat",0), 
			ft_strncmp("aest","testat", 0));
    printf("STRNCMP \t %d \t\t\t %d\n", strncmp("testat","test",9), 
			ft_strncmp("testat", "test",9));
    printf("STRNCMP \t %d \t\t\t %d\n", strncmp("testat","testforme", 4), 
			ft_strncmp("testat", "testforme", 4));
    printf("ATOI \t\t %d \t\t\t %d\n", atoi("54"), ft_atoi("54"));
    printf("ATOI \t\t %d \t\t\t %d\n", atoi(" -54"), ft_atoi(" -54"));
    printf("ATOI \t\t %d \t\t\t %d\n", atoi("  ---54"), ft_atoi("  ---54"));
    printf("ISALPHA \t %d \t\t\t %d\n", isalpha(95), ft_isalpha(95));
    printf("ISALPHA \t %d \t\t\t %d\n", isalpha(65), ft_isalpha(65));
    printf("ISALPHA \t %d \t\t\t %d\n", isalpha(123), ft_isalpha(123));
    printf("ISALPHA \t %d \t\t\t %d\n", isalpha(97), ft_isalpha(97));
    printf("ISDIGIT \t %d \t\t\t %d\n", isdigit(57), ft_isdigit(57));
    printf("ISDIGIT \t %d \t\t\t %d\n", isdigit(48), ft_isdigit(48));
    printf("ISDIGIT \t %d \t\t\t %d\n", isdigit(5), ft_isdigit(5));
    printf("ISDIGIT \t %d \t\t\t %d\n", isdigit(90), ft_isdigit(90));
    printf("ISALNUM \t %d \t\t\t %d\n", isalnum(5), ft_isalnum(5));
    printf("ISALNUM \t %d \t\t\t %d\n", isalnum(90), ft_isalnum(90));
    printf("ISALNUM \t %d \t\t\t %d\n", isalnum(123), ft_isalnum(123));
    printf("ISALNUM \t %d \t\t\t %d\n", isalnum(48), ft_isalnum(48));
    printf("ISALNUM \t %d \t\t\t %d\n", isalnum(97), ft_isalnum(97));
    printf("ISASCII \t %d \t\t\t %d\n", isascii(0), ft_isascii(0));
    printf("ISASCII \t %d \t\t\t %d\n", isascii(127), ft_isascii(127));
    printf("ISASCII \t %d \t\t\t %d\n", isascii(-1), ft_isascii(-1));
    printf("ISASCII \t %d \t\t\t %d\n", isascii(128), ft_isascii(128));
    printf("ISASCII \t %d \t\t\t %d\n", isascii(10), ft_isascii(10));
    printf("ISPRINT \t %d \t\t\t %d\n", isprint(32), ft_isprint(32));
    printf("ISPRINT \t %d \t\t\t %d\n", isprint(126), ft_isprint(126));
    printf("ISPRINT \t %d \t\t\t %d\n", isprint(31), ft_isprint(31));
    printf("ISPRINT(127) \t %d \t\t\t %d\n", isprint(127), ft_isprint(127));
    printf("ISPRINT \t %d \t\t\t %d\n", isprint(55), ft_isprint(55));
    printf("ISPRINT \t %d \t\t\t %d\n", isprint(128), ft_isprint(128));
    printf("TOUPPER \t %d%d%d%d \t\t %d%d%d%d\n", toupper(122), toupper(97),
			toupper(100), toupper(31),
			ft_toupper(122), ft_toupper(97), ft_toupper(100), ft_toupper(31));
    printf("TOLOWER \t %d%d%d%d \t\t %d%d%d%d\n", tolower(65), tolower(90),
			tolower(71), tolower(31), 
			ft_tolower(65), ft_tolower(90), ft_tolower(71), ft_tolower(31));
    printf("\n");
    void * a;
	a = ft_memalloc(5);
    printf("ft_memalloc: \t adresa alocata \t%p\n", a);
	printf("ft_memdel:  \t\t - de citit\n" );
	printf("ft_strnew: \t\t %s - de citit\n", ft_strnew(5));
    printf("ft_strdel: \t\t - de citit\n");
	char t[] = "mihai";
	ft_strclr(t);
	printf("ft_strclr: \t\t %s - de citit\n", t);
   	printf("ft_striter: \t\t testeststt\n"); 
    void (*fstriter)(char*);
    fstriter = &ft_teststriter;
	char *sforf = "test";
   	ft_striter(sforf,fstriter);
    printf("\nft_striteri: \t\t testeststt\n"); 
	void(*fstriteri)(unsigned int, char*);
    fstriteri = &ft_teststriteri;
    ft_striteri(sforf,fstriteri);
    char (*fstrmap)(char);
    fstrmap = &ft_teststrmap;
	char const *sformap = "test";
   	printf("\nft_strmap: \t\t uftu \t\t %s\n", ft_strmap(sformap,fstrmap));
	char (*fstrmapi)(unsigned int, char);
	fstrmapi = &ft_teststrmapi;
	printf("ft_strmapi: \t\t sdrs \t\t %s\n", ft_strmapi(sformap,fstrmapi));
    int testequ;
	testequ = ft_strequ("testat", "testat");
	printf("ft_strequ: \t\t ok \t\t ");
    if (testequ == 1)
    	printf("ok");
    else
    	printf("notOK");
	printf("\n");	
	printf("ft_strnequ: \t\t ok \t\t ");
	int testnequ;
	testnequ = ft_strnequ("testdetest", "testdtest", 8);
	if (testnequ == 0)
		printf("ok");
	else
		printf("notOK");
	printf("\n");
	printf("ft_strsub: \t\t rdete \t\t %s\n", ft_strsub("Sirdetestat", 2, 5));
	printf("ft_strjoin: \t\t test test2 \t %s\n", ft_strjoin("test ", "test2"));
	printf("ft_strtrim: \t\t test de test \t %s\n", ft_strtrim("   test de test  "));
	char **sstrspl = ft_strsplit("   test    de test ", ' ');
	printf("ft_strsplit \t\t de \t\t %s\n",  sstrspl[1]);
	printf("\nft_itoa: \t\t -123 \t\t %s",ft_itoa( -123) );
	printf("\nft_putchar: \t\t a\n");
	ft_putchar('a');
	printf("\nft_putstr: \t\t lalalatest\n");
	ft_putstr("lalalatest");
	printf("\nft_putendl: \t\t testlalala -> si rand nou\n");
	ft_putendl("testlalala");
	printf("\nft_putnbr: \t\t -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nft_putchar_fd: \t\t a\n");
	ft_putchar_fd('a', 1);
	printf("\nft_putstr_fd: \t\t lalalatest\n");
	ft_putstr_fd("lalalatest", 1);
	printf("\nft_putendl_fd: \t\t testlalala -> si rand nou\n");
	ft_putendl_fd("testlalala", 1);
	printf("\nft_putnbr_fd: \t\t -2147483648\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");   
	return (0);
}
