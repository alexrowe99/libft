#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			j;

	sub = (char *)malloc(len);
	if (!sub)
		return (0);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	return (sub);
}
