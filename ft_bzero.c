/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:53:52 by aramos-m          #+#    #+#             */
/*   Updated: 2023/11/20 21:04:20 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*saux;

	i = 0;
	saux = s;
	while (i < n)
	{
		saux[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
#include <string.h>
int	main ()
{
	char	s[8] = "Hola Ana";
	size_t	n  = 1;

	bzero(s, n);
	printf("%s\n", s);
	ft_bzero(s,n);
	printf("%s\n", s);
	return(0);
}*/
