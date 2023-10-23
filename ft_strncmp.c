/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:32:50 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/17 21:54:55 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && s2[i] && s1[i])
	{
		if (s2[i] != s1[i])
			return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	const char	str1[] = "}ello, World!";
	const char	str2[] = "Hello, World!";
	size_t		n = 5;

	printf("Original function: %d\n", strncmp(str1, str2, n));
	printf("Created function: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
