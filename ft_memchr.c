#include <stddef.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0' && !(str[i]))
		return (s + i);
	return (0);
}
