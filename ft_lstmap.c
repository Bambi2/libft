#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	void	*new_content;
	t_list	*new;

	while (lst)
	{
		new_content = (*f)(lst->content);
		if (!new_content)
			(*del)(new_content);
		else
		{
			new = ft_lstnew(new_content);
			ft_lstadd_back(&result, new);
		}
		lst = lst->next;
	}
	return (result);
}