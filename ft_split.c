#include "libft.h"


static int	get_string_count(char const *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (s[i])
	{
		if (s[i] == c)
			result++;
		i++;
	}
	return (result);
}

static int	get_string_length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	z;
	char	**result;

	result = (char **) malloc((get_string_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	z = 0;
	while(s[z])
	{
		result[i] = (char *) malloc((get_string_length(s + z, c) + 1) * sizeof(char));
		if (!result[i])
		{
			while (i >= 0)
				free(result[i--]);
			return (NULL);
		}
		j = 0;
		while(s[i] != c)
			result[i][j++] = s[z++];
		result[i++][j] = '\0';
	}
}