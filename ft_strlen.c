/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:35:53 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/17 21:16:20 by aramos-m         ###   ########.fr       */
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
	char	s[] = " ";
	int	org;
	int	cre;

	org = strlen(s);
	cre = ft_strlen(s);
	printf("Original function: %d\n", org);
	printf("Created function: %d\n", cre);
}*/
