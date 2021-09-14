#include <stddef.h>

static size_t	ft_strlen_sns(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < n)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (little[j])
			{
				if (big[i + j] != little[j] || i + j > n)
					break ;
				j++;
			}
			if (j == ft_strlen_sns(little))
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
