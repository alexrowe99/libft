#include <stdlib.h>

static unsigned int	ft_abs_i(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}

static char	*ft_neg_or_pos(int n, int *len, int *end)
{
	char	*s;
	char	first;
	int		size;

	if (n < 0)
	{
		*end = 1;
		size = *len + 2;
		first = '-';
	}
	else
	{
		size = *len + 1;
		first = ' ';
	}
	s = (char *)malloc(size);
	if (!s)
		return (NULL);
	s[0] = first;
	if (n < 0)
		(*len)++;
	return (s);
}

char	*ft_itoa(int n)
{
	char			*dest;
	unsigned int	absolute_nb;
	int				len;
	int				end;

	absolute_nb = ft_abs_i(n);
	len = 0;
	end = 0;
	while (absolute_nb / 10 > 0)
	{
		absolute_nb /= 10;
		len++;
	}
	absolute_nb = ft_abs_i(n);
	dest = ft_neg_or_pos(n, &len, &end);
	if (!dest)
		return (NULL);
	while (len >= end)
	{
		dest[len--] = (absolute_nb % 10) + '0';
		absolute_nb /= 10;
	}
	return (dest);
}
