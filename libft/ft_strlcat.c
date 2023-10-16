/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:38:43 by aramos-m          #+#    #+#             */
/*   Updated: 2023/08/28 20:42:50 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_src;
	unsigned int	l_dest;
	unsigned int	total;

	i = 0;
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	total = l_src + l_dest;
	if (l_dest >= size)
	{
		return (size + l_src);
	}
	if (l_dest < size)
	{
		while (src[i] != '\0' && l_dest + i < size - 1)
		{
			dest[l_dest + i] = src[i];
			i++;
		}
		dest[l_dest + i] = '\0';
	}
	return (total);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dest[8] = "Hola, ";
	char dest1[8] = "Hola, ";
	char src[] = "mundo!";

	printf("%u\n", ft_strlcat(dest, src, 0));
	printf("%lu\n", strlcat(dest1, src, 0));

	printf("Result: %s\n", dest);
	printf("%s\n", dest1);

	return 0;
}*/
