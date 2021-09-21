#include <stdlib.h>

static unsigned int ft_abs_i(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}

static void ft_neg_or_pos(int n, char *dest, int *len, int *end)
{
	free(dest);
	if (n < 0)
	{
		*end = 1;
		dest = (char *)malloc(*len + 2);
		dest[0] = '-';
		(*len)++;
	}
	else if (n > 0)
		dest = (char *)malloc(*len + 1);
	else
	{
		dest = (char *)malloc(1);
		dest[0] = '0';
	}
}

char *ft_itoa(int n)
{
	char *dest;
	unsigned int absolute_nb;
	int len;
	int end;

	dest = (char *)malloc(1);
	if (!dest)
		return (NULL);
	absolute_nb = ft_abs_i(n);
	len = 0;
	end = 0;
	while (absolute_nb / 10 > 0)
	{
		absolute_nb /= 10;
		len++;
	}
	absolute_nb = ft_abs_i(n);
	ft_neg_or_pos(n, dest, &len, &end);
	if (!dest)
		return (NULL);
	while (len >= end)
	{
		dest[len--] = (absolute_nb % 10) + '0';
		absolute_nb /= 10;
	}
	return (dest);
}
