#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen_st(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

static int	ft_inset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strcpy_st(char *dest, const char *src)
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

static char	*ft_strdup_st(const char *src)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(src));
	ft_strcpy_st(new_str, src);
	return (new_str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	int		i;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen_st(s1) - 1;
	while (ft_inset(set, s1[start]))
		start++;
	if (start == (end + 1))
		start = 0;
	while (ft_inset(set, s1[end]))
		end--;
	if (end == -1)
		return (ft_strdup_st(""));
	trim = (char *)malloc(end - start);
	i = 0;
	while (start <= end && end != -1)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	return (trim);
}
