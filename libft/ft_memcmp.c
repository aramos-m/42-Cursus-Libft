/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:19:25 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/17 23:39:36 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ptr1;
	unsigned const char	*ptr2;
	unsigned int		i;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	while (i < n)
	{
		if ((ptr1[i] > ptr2[i]) || (ptr1[i] < ptr2[i]))
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str1[] = "H42lo, World!";
	const char	str2[] = "Hello, World!";
	size_t		n = 5;

	printf("Original function: %d\n", memcmp(str1, str2, n));
	printf("Created function: %d\n", ft_memcmp(str1, str2, n));
	return (0);
}*/
