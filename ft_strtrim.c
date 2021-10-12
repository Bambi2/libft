#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    int     length;
    char    *result;
    int     check;

    i = 0;
    j = 0;
    length = 0;
    check = 0;
    while (s1[i])
    {
        while (set[j])
        {
            if (s1[i] == set[j++])
            {
                length++;
                check = 1;
                break ;
            }
            i++;
        }
        if (!check)
            break ; 
        check = 0;
    }
    if (i != ft_strlen(s1))
    {
        while (s1[i])
    }
    result = (char *) malloc(ft_strlen(s1) - length + 1);
    if (!result)
        return (NULL);
    
}