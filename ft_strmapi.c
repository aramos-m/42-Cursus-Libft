#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char const      *str;
        int             i;

        str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
        if (str == NULL)
                return (NULL);
        while (s[i] != '\0')
        {
                str[i] = f(i, s[i]);
                i++;
        }
        str[i] = '\0';
        return (str);
}
