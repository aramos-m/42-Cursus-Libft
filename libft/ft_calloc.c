/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:48:49 by aramos-m          #+#    #+#             */
/*   Updated: 2023/10/22 19:59:48 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdlib.h>*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((count * size) == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero((void *)ptr, count * size);
	return (ptr);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	size_t	count = 5;
	size_t	size = 2;
	printf("Actual: %s\n", calloc(count, size));
	printf("Expected: %s\n", ft_calloc(count, size));

	return (0);
}*/
