#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	c1;
	size_t			i;

	c1 = c;
	i = 0;
	while (i < n)
	{
		*((char *)str + i) = c1;
		i++;
	}
	return (str);
}
