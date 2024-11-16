#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *t;

    if (new == NULL)
        return ;
    if ((*lst) == NULL)
       (*lst) = new;
    else
    {
        t = *lst;
        while(t->next != NULL)
            t = t->next;
        t->next = new;
    }
}