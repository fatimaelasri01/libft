#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    t_list  *t;

    count = 0;
    t = lst;
    while(t != NULL)
    {
        t = t->next;
        count++;
    }
    return (count);
}