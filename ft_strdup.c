#include <stdlib.h>

static char	*ft_strcpy_sd(char *dest, const char *src)
{
	int	ctr;

	ctr = 0;
	while (src[ctr])
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	dest[ctr] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(src));
	ft_strcpy_sd(new_str, src);
	return (new_str);
}
