#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	*ptr = 0;
	return (ptr);
}
