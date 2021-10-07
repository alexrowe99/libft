#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb_str;
	int		len;

	nb_str = ft_itoa(n);
	len = ft_strlen(nb_str);
	write(fd, nb_str, len);
}
