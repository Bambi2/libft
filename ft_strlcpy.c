#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char text1[] = "Mac Miller";
// 	char text2[] = "Boss";
// 	size_t result1 = strlcpy(text1, text2, 20);
// 	char text3[] = "Mac Miller";
// 	char text4[] = "Boss";
// 	size_t result2 = ft_strlcpy(text3, text4, 20);
// 	printf("real = %s/%zu mine = %s/%zu\n", text1, result1, text3, result2);
// }