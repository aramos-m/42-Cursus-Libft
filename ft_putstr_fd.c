#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
int	main(void)
{
	char	*s = "Hola, soy Ana";
	int	fd = 1;

	ft_putstr_fd(s, fd);
	return (0);
}
