#include <stddef.h>

void	*ft_memcpy_mm(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n && (dest || src))
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	
	if (dest > src)
	{
		i = (int)n - 1;
        while (i >= 0)
        {
            *((char *)(dest + i)) = *((char *)(src + i));
            i--;
        }
	}
	else
		ft_memcpy_mm(dest, src, n);
	return (dest);
}
