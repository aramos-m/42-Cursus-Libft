#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char     *ft_divide(char const *s, char rule, int *k)
{
        int     *i;
        int     j;
        char    *split;

        i = k;
        j = 0;
        while (s [*i] != rule)
        {
                split[j] = s[*i];
                j++;
                *i++;
        }
        split[j] = '\0';
        return (split);
}

/*char **ft_split(char const *s, char c)
{
        char    **result;
        int     i;
        int     j;

        i = 0;
        j = 0;
        result = malloc(sizeof(char *) * (strlen(s) + 1));
        if (result == NULL)
                return(NULL);
        while (s[j] != '\0')
        {
                j = ft_divide(result[i], s, c, j) + 1;
        }
        return (result);
}*/

int main (void)
{
        char const      s[] = "Hola, Ana, ¿cómo estás?";
        char            **split;
        char            rule = ' ';
        int             *k = 0;

        split = (char **)malloc(sizeof(char *) * (strlen(s) + 1));

        split[0] = ft_divide(s, rule, k);
        //k = ft_divide(split[1], s, rule, k + 1);

        printf("%s\n", split[0]);
        //printf("%s", split[1]);

        return 0;
}
