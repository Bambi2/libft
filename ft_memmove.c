#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	temp[len];

	i = 0;
	while (i < len)
	{
		temp[i] = *(char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(char *)(dst + i) = temp[i];
		i++;
	}
	return(dst);
}


// int main()
// {
// 	char text1[] = "Mac Miller";
// 	char text2[] = "Boss";
// 	char *zero1 = 0;
// 	memmove(text1 + 4, zero1, 5);
// 	// char text3[] = "Mac Miller";
// 	// char text4[] = "Boss";
// 	// char *zero2 = 0;
// 	// ft_memmove(text3 + 4, zero2, 5);
// 	printf("Real = %s ", text1);
// 	// printf("Mine = %s", text3);
// }