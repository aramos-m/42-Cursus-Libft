#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
        ft_pustr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
int     main(void)
{
        char    *s = "Hola, soy Ana";
        int     fd = 1;

        ft_putstr_fd(s, fd);
        return (0);
}
