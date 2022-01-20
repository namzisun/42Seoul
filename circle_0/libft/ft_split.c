#include "libft.h"

static int ft_len(char const *s, char c)
{
    int i;
    int count;

    i = -1;
    count = 0;
    while (s[++i])
    {
        if (s[i] == c)
            continue;
        count++;
    }
    return (count);
}

static char *ft_copy(char *s, char c)
{

}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int     len;
    int     i;

    i = -1;
    len = ft_len(s, c);
    tab = (char**)malloc(sizeof(char*) * len);
    if (!tab)
        return (NULL);
    while (s[++i])
    {
        
    }
    tab[len] = 0;
    return (tab);
}