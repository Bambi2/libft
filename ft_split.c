#include "libft.h"

static int	get_string_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c && i != 0 && s[i + 1])
			count++;
		i++;
	}
	return (count);
}

static int	get_string_length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static int	fill(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	z;
	int	length;

	i = 0;
	z = 0;
	while (s[z])
	{
		length = get_string_length(s + z, c);
		if (length)
		{
			result[i] = (char *) malloc((length + 1) * sizeof(char));
			if (!result[i])
			{
				while (i - 1 >= 0)
					free(result[--i]);
				return (0);
			}
			j = 0;
			while (s[z] != c && s[z])
				result[i][j++] = s[z++];
			result[i++][j] = '\0';
		}
		z++;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **) malloc((get_string_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill(result, s, c))
	{
		free(result);
		return (NULL);
	}
	return (result);
}
