/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:02:41 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/17 23:17:16 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == ptr[i])
			return (ptr + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	s[] = "Hello, World!";
	char			c = 'o';
	size_t			n = 5;

	printf("Original function: %s\n", (char *) memchr(s, c, n));
	printf("Created function: %s\n", (char *)ft_memchr(s, c, n));
	return (0);
}*/
