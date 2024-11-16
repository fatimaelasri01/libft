#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *l;

    l = (t_list  *)malloc(sizeof(t_list));
    if (l == NULL)
        return (NULL);
    l->content = content;
    l->next = NULL;
    return (l);
}