
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void	*dst;
	
	dst = malloc(count * size);
	if (dst == '\0')
		return (NULL);
	else if
		ft_bzero(dst, count * size);
	return (dst);
}
#include <stdio.h>
int	main(void)
{
	size_t	count = 5;
	size_t	size = 2;
	printf("Original function: %s\n", calloc(count, size));
	printf("Created function: %s\n", ft_calloc(count, size));

	return (0);
}
