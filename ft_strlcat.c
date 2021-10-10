#include "libft.h"

size_t	ft_strlcat(char * dst, const char *src, size_t dstsize)
{
	int	i;
	int	dst_length;

	i = 0;
	dst_length = ft_strlen(dst);
	while (i < dstsize - dst_length - 1)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[dst_length + i + 1] = '\0';
	return (ft_strlen(src) + dst_length);
}


int main()
{
	char text1[30] = "Mac Miller";
	char text2[] = "Boss";
	size_t result1 = strlcat(text1, text2, 31);
	char text3[30] = "Mac Miller";
	char text4[] = "Boss";
	size_t result2 = ft_strlcat(text3, text4, 31);
	printf("real = %s/%zu mine = %s/%zu", text1, result1, text3, result2);
}