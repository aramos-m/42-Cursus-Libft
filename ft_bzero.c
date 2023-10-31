/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:53:52 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/22 19:54:11 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = s;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
int	main ()
{
	char	str1[20];
	char	str2[20];

	bzero(str1, 3);
	ft_bzero(str1, 3);

	printf("Actual: %s\n", str1);
	printf("Expected: %s\n", str2);
}*/
