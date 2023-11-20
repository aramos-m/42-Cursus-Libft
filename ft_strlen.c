/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:35:53 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/20 20:48:11 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	*src = " ";

	printf("Actual: %d\n", ft_strlen(s));
	printf("Expected: %d", strlen(s));
	return (0);
}*/
