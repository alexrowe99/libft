#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

static size_t	ft_strlen_s(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

static size_t	ft_strlcpy_s(char *dest, const char *src, size_t size)
{
	size_t	ctr;

	ctr = 0;
	while (src[ctr] && ctr < size - 1 && size > 0)
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	if (ctr != 0 || !src[ctr])
		dest[ctr] = '\0';
	while (src[ctr])
		ctr++;
	return (ctr);
}

static int	ft_fillsplit(const char *str, char c, char **split, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < len)
	{
		j = 0;
		while (str[i + j] != c)
			j++;
		if (j != 0)
		{
			split[k] = (char *)malloc(j);
			ft_strlcpy_s(split[k], &str[i], j + 1);
			k++;
		}
		i++;
		i += j;
	}
	return (k);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		len;
	int		i;
	int		k;

	len = ft_strlen_s(s);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			k++;
		i++;
	}
	split = (char **)malloc(sizeof(char *) * (k + 2));
	k = ft_fillsplit(s, c, split, len);
	split[k] = NULL;
	return (split);
}
