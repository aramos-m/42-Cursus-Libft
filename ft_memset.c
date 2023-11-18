/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:59:21 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/22 21:05:43 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*aux;

	aux = str;
	i = 0;
	while (i < n)
	{
		aux[i] = c;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[10] = "Hola Ana";
	int	c = ' ';
	size_t	n = 2;

	printf("Actual: %s\n", ft_memset(str, c, n));
	printf("Expected: %s", memset(str, c, n));
	return (0);
}*/
