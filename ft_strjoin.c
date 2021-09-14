#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen_sj(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen_sj(s1);
	len2 = ft_strlen_sj(s2);
	join = (char *)malloc(len1 + len2);
	if (!join)
		return (0);
	i = 0;
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		join[i] = s2[i - len1];
		i++;
	}
	return (join);
}
