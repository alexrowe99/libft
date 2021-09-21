#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_str;
	int		len;

	len = ft_strlen(src);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, src, len + 1);
	return (new_str);
}
