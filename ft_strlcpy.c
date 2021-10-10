#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char text1[] = "Mac Miller";
// 	char text2[] = "Miller";
// 	size_t result = strlcpy(text1, text2, 10);
// 	printf("real = %s", text1);

// }