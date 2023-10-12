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

	printf("Original function: %s\n", str1);
	printf("Created function: %s\n", str2);
}*/
