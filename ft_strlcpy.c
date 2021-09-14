#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
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
