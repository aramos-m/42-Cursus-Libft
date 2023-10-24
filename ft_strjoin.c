//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*scat;

	scat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (scat == NULL)
		return (NULL);
	ft_strlcpy(scat, s1, strlen(s1));
	ft_strlcat(scat, s2, strlen(s2));
	return (scat);
}
int	main(void)
{
	char	const *s1 = "Hola, ¿que tal?";
	char	const *s2 = " Ana";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
