#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			j;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	i = start;
	j = 0;
	while (start < ft_strlen(s) && s[i] && j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
