#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((void *)s + i);
		i++;
	}
	if (c == '\0' && !(str[i]))
		return ((void *)s + i);
	return (0);
}
