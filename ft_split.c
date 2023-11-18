//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char	*ft_divide(char const *s, char rule, int *k, int len)
{
        int     i;
        int     j;
	char	*split;

	split = (char *)malloc(sizeof(char)*(len + 1));

        i = *k;
        j = 0;
        while (s[i] != rule)
        {
                split[j] = s[i];
                j++;
                i++;
        }
	*k = i + 1;
        split[j] = '\0';
        return (split);
}

char	**ft_split(char const *s, char c)
{
        char    **result;
        int     i;
        int     *j;
	int	len;
	int	count = 1;

        i = 0;
	len = strlen(s);
        j = malloc(sizeof(int));
        result = malloc(sizeof(char *) * (len + 1));
        if (result == NULL || j == NULL)
                return (NULL);
	*j = 0;
        while (*j <= len)
	{
                result[i] = ft_divide(s, c, j,len);
		printf("%s\n",result[i]);
	}
	return (result);
}

int main (void)
{
        char const      s[] = "Hola, Ana, ¿cómo estás?";
        char            **split;
        char            rule = ' ';
        int             k = 0;

	/*split = malloc(sizeof(char *)*( strlen(s) + 1));
	split = ft_split(s,rule);
	printf("%s\n",split[0]);*/
	ft_split(s,rule);
        return 0;
}
