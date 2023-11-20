/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:02:41 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/20 21:12:03 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*saux;

	i = 0;
	saux = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == saux[i])
			return (saux + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	const char	s* = "Hello, World!";
	int		c = 'o';
	size_t		n = 5;

	printf("Actual: %s\n", ft_memchr(s, c, n));
	printf("Expected: %s", memchr(s, c, n));
	return (0);
}*/
