#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*deleted;

	node = *lst;
	while (node)
	{
		del(node->content);
		deleted = node;
		node = node->next;
		free(deleted);
	}
	*lst = node;
}
