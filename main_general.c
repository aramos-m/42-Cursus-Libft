/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_general.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:04:25 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/21 21:54:05 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.c>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	funcionrara(unsigned int i, char c)
{
	(void)	i;
	return (c + 1);
}

void	funcionrara2(unsigned int i, char *c)
{
	(void) i;
	*c = ft_toupper(*c);
}

int main(void)
{
	printf("Esta es la función ISALPHA:\n");
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", isalpha(' '));
	printf("\n");

	printf("Esta es la función ISDIGITA:\n");
	printf("%d\n", ft_isdigit('8'));
	printf("%d\n", isdigit('8'));
	printf("\n");

	printf("Esta es la función ISALNUM:\n");
	printf("%d\n", ft_isalnum(128));
	printf("%d\n", isalnum(128));
	printf("\n");

	printf("Esta es la función ISASCII:\n");
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii(128));
	printf("\n");
	
	printf("Esta es la función ISPRINT:\n");
	printf("%d\n", ft_isprint('\t'));
	printf("%d\n", isprint('\t'));
	printf("\n");

	printf("Esta es la función STRLEN:\n");
	char	s[] = " ";
	printf("%d\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
	printf("\n");

	printf("Esta es la función MEMSET:\n");
	char	str[10] = "Hola Ana";
	int		c = ' ';
	size_t	n = 2;
	printf("%s\n", ft_memset(str, c, n));
	printf("%s\n", memset(str, c, n));
	printf("\n");

	printf("Esta es la función BZERO:\n");
	char	s[8] = "Hola Ana";
	size_t	n = 1;
	bzero(s, n);
	printf("%s\n", s);
	ft_bzero(s,n);
	printf("%s\n", s);
	printf("\n");

	printf("Esta es la función MEMCPY:\n");
	char	src[] = "123456789";
	char	dest[] = "Hola Ana";
	int		n = 4;
	printf("%s\n", ft_memcpy(dest, src, n));
	printf("%s\n", memcpy(dest, src, n));
	printf("\n");

	printf("Esta es la función MEMMOVE:\n");
	char	dest[] = "Hola Ana";
	char	src[] = "123456789";
	int		n = 4;
	printf("%s\n", ft_memmove(dest, src, n));
	printf("%s\n", memmove(dest, src, n));
	printf("\n");i

	printf("Esta es la función STRLCPY:\n");
	char	dst1[] = "Hola";
	char	src1[] = "Algo";
	char	dst2[] = "Hola";
	char	src2 [] = "Algo";
	printf("%lu\n", ft_strlcpy(dst1, src1, 5));
	printf("%lu\n", strlcpy(dst2, src2, 5));
	printf("\n");

	printf("Esta es la función STRLCAT:\n");
	char	dst1[20] = "Hola";
	char	src1[] = "Algo";
	char	dst2[20] = "Hola";
	char	src2[] = "Algo";
	printf("%lu %s\n", ft_strlcat(dst1, src1, 8), dst1);
	printf("%lu %s\n", strlcat(dst2, src2, 8), dst2);
	printf("\n");

	printf("Esta es la función TOUPPER:\n");
	printf("%d\n", toupper('a'));
	printf("%d\n", ft_toupper('a'));
	printf("\n");

	printf("Esta es la función TOLOWER:\n");
	printf("%d\n", tolower('A'));
	printf("%d\n", ft_tolower('A'));
	printf("\n");

	printf("Esta es la función STRCHR:\n");
	char	str[] = "Hello, World!";
	int		c = 'I';
	printf("%s\n", strchr(str, c));
	printf("%s\n", ft_strchr(str, c));
	printf("\n");

	printf("Esta es la función STRRCHR:\n");
	char	str[] = "Hello, World!";
	int		c = 'e';
	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str, c));
	printf("\n");

	printf("Esta es la función STRNCMP:\n");
	const char	str1[] = "}ello, World!";
	const char	str2[] = "Hello, World!";
	size_t		n = 5;
	printf("%d\n", strncmp(str1, str2, n));
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("\n");

	printf("Esta es la función MEMCHR:\n");
	const char	s[] = "Hello, World!";
	int			c = 'o';
	size_t		n = 5;
	printf("%s\n", ft_memchr(s, c, n));
	printf("%s\n", memchr(s, c, n));
	printf("\n");

	printf("Esta es la función MEMCMP:\n");
	const char	str1[] = "H42lo, World!";
	const char	str2[] = "Hello, World!";
	size_t		n = 5;
	printf("%d\n", memcmp(str1, str2, n));
	printf("%d\n", ft_memcmp(str1, str2, n));
	printf("\n");

	printf("Esta es la función STRNSTR:\n");
	const char	*haystack = "Hola, ¿que tal?";
	const char	*needle = "que";
	int			len = 8;
	printf("%s\n", strnstr(haystack, needle, len));
	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("\n");

	printf("Esta es la función ATOI:\n");
	char	str[] = "-1234a";
	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));
	printf("\n");

	printf("Esta es la función CALLOC:\n");
	size_t	count = 5;
	size_t	size = 2;
	printf("%s\n", calloc(count, size));
	printf("%s\n", ft_calloc(count, size));
	printf("\n");

	printf("Esta es la función STRDUP:\n");
	char 	DD[] = "Hola";
	char	*EE;
	char	*FF;
	EE = ft_strdup(DD);
	FF = strdup(DD);
	printf("%s\n", EE);
	printf("%s\n", FF);
	free(EE);
	free(FF);
	printf("\n");

	printf("Esta es la función SUBSTR:\n");
	char const		*s = "Hola, ¿que tal?";
	unsigned int	start = 20;
	size_t			len = 5;
	printf("%s\n", ft_substr(s, start, len));
	printf("\n");

	printf("Esta es la función STRJOIN:\n");
	char const	*s1 = "lorem ipsum";
	char const	*s2 = "dolor sit amet";
	printf("%s\n", ft_strjoin(s1, s2));
	printf("\n");

	printf("Esta es la función SPLIT:\n");
	char const s[] = "Hola/Ana,///¿qué tal?";
	char **split = ft_split(s, rule);
	char rule = 'i';
	int	i = 0;
	while (split[i])
	{
        printf("Fila %d: %s\n", i + 1, split[i]);
        free(split[i]);
		i++;
	}
	free(split);
	printf("\n");

	printf("Esta es la función ITOA:\n");
	int	n = -12345;
	printf("%s\n", ft_itoa(n));
	printf("\n");

	printf("Esta es la función STRMAPI:\n");
	char	*QQ = "Hola";
	char	*RR;
	RR = ft_strmapi(QQ, &funcionrara);
	printf("%s\n", RR);
	printf("\n");

	printf("Esta es la función STRITERI:\n");
	char	SS[] = "hello world";
	ft_striteri(SS, funcionrara2);
	printf("%s\n", SS);
	printf("\n");

	printf("Esta es la función PUTCHAR_FD:\n");
	ft_putchar_fd('A', 1);
	printf("\n");

	printf("Esta es la función PUTSTR_FD:\n");
	ft_putstr_fd("Hola soy Ana", 1);
	printf("\n\n");

	printf("Esta es la función PUTENDL_FD:\n");
	ft_putstr_fd("Hola soy Ana", 1);
	printf("\n");

	printf("Esta es la función PUTNBR_FD:\n");
	ft_putnbr_fd(-456, 1);
	printf("\n\n");
	
	return (0);
}
