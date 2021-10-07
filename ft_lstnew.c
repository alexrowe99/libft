#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *first)
{
	t_list	*new_lst;

	new_lst = malloc(sizeof(first));
	if (!new_lst)
		return (NULL);
	new_lst->content = first;
	new_lst->next = NULL;
	return (new_lst);
}
