#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}


int main()
{
    printf("real = %d ", isalnum(5));
    printf("mine = %d\n", ft_isalnum(5));
}