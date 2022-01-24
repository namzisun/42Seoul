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

static int ft_word(char const *s, char c, int *j)
{
    int i;
    int word_len;

    i = *j;
    while (s[i] && s[i] == c)
        i++;
    *j = i;
    word_len = 0;
    while (s[i] && s[i] != c)
    {
        word_len++;
        i++;
    }
    return (word_len);
}

static char *ft_sep(char const *s, char c, int *j)
{
    int i;
    int k;
    int word_len;
    char *sep;

    i = *j;
    k = 0;
    word_len = ft_word(s, c, j);
    sep = (char *)malloc(sizeof(char) * (word_len + 1));
    if (!sep)
        return (NULL);
    while (s[i] && s[i] != c)
    {
        sep[k] = s[i];
        k++;
        i++;
    }
    sep[word_len] = 0;
    *j = i;
    return (sep);
}

static void ft_free(char **tab, int index)
{
    int i;

    i = -1;
    while (++i < index)
        free(tab[i]);
    free(tab);
}

char    **ft_split(char const *s, char c)
{
    char **tab;
    int len;
    int i;
    int j;

    i = 0;
    j = 0;
    len = ft_len(s, c);
    tab = (char**)malloc(sizeof(char*) * (len + 1));
    if (!tab)
        return (NULL);
    while (i < len)
    {
        tab[i] = ft_sep(s, c, &j);
        if (!tab[i])
        {
            ft_free(tab, i);
            return (NULL);
        }
        i++;
    }
    tab[len] = 0;
    return (tab);
}