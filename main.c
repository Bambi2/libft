//memset bzero memcpy
#include "libft.h"

void    check_isascii(int c);
void    check_isprint(int c);
void    check_strlen(const char *s);
// void    check_memset(void *b, int c, size_t len);
void    check_strncmp(char *s1, char *s2, size_t n);

int main()
{


    //isascii
    check_isascii(0177);
    check_isascii(-1);
    check_isascii(128);
    printf("\n");

    //isprint
    check_isprint(112);
    check_isprint(040);
    check_isprint(037);
    check_isprint(200);
    printf("\n");

    //strlen
    char *text1 = "what's up";
    char *text2 = "";
    check_strlen("hello");
    check_strlen("");
    check_strlen("hello");
    check_strlen(text1);
    check_strlen(text2);
    printf("\n");
    
    //memset
    // char text3[50] = "Hello, World!";
    // char text4[50] = "Hello, World!";
    // char * first_result = memset(text3, 'A', 50);
    // char * second_result = ft_memset(text4, 'A', 50);
    // printf("real = %s mine = %s", first_result, second_result);

    //strncmp
    char text5[] = "hello";
    char text6[] = "hllo";
    check_strncmp(text5, text6, 0);
    check_strncmp(text5, text6, 10);
    check_strncmp(text5, text6, 3);

    //bzero
    // char text7[] = "hello";
    // char text8[] = "hello";
    // bzero(text7, 3);
    // ft_bzero(text8, 3);
    // printf("real = %c mine = %c", text7[4],text8[4]);

    //memcpy
    // char *memcpy_test = 0;
    // // char memcpy_real[] = "hello";
    // // char memcpy_mine[] = "hello";
    // char memcpy_src[] = "macmiller";
    // // char *memcpy_real_result = memcpy(memcpy_test, memcpy_src, 3);
    // char *memcpy_mine_result = ft_memcpy(memcpy_test, memcpy_src, 3);
    // printf("real = %s, mine = ", memcpy_mine_result);

    //strlcpy
    char strlcpy_real[] = "hellohellohello";
    char strlcpy_src[] = "mac";
    size_t strlcpy_real_result = strlcpy(strlcpy_real, strlcpy_src, 10);
    printf("real = %zu, %s", strlcpy_real_result, strlcpy_real);
}

void    check_isascii(int c)
{
    int real;
    int mine;

    real = isascii(c);
    mine = ft_isascii(c);
    if (real != mine)
        printf("isasciiERROR ");
}

void    check_isprint(int c)
{
    int real;
    int mine;

    real = isascii(c);
    mine = ft_isascii(c);
    if (real != mine)
        printf("isprintERROR ");
}

void    check_strlen(const char *s)
{
    size_t real;
    size_t mine;

    real = strlen(s);
    mine = ft_strlen(s);
    if (real != mine)
        printf("strlenERROR ");
}

// void    check_memset(void *b, int c, size_t len)
// {
//     void *real;
//     void *mine;

//     real = memset();
//     mine = ft_strlen(s);
//     if (real != mine)
//         printf("strlenERROR ");
// }

void    check_strncmp(char *s1, char *s2, size_t n)
{
    int real;
    int mine;

    real = strncmp(s1, s2, n);
    mine = ft_strncmp(s1, s2, n);
    // printf("real = %d mine = %d", real, mine);
    if (real != mine)
        printf("strncmpERROR ");
}