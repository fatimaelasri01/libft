#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *tmp;

    tmp = lst;
    while(tmp->next != NULL)
        tmp = tmp->next;
    return (tmp);
}


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

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
        return;
    new->next = (*lst);
    (*lst) = new;
}

int main()
{
    int c =  1;
    int k = 2;
    int j = 3;
    int nb;
    t_list *t;
    t_list *s = NULL;

    t = ft_lstnew(&c);
    ft_lstadd_front(&s, t);
    printf("%d", *(int *)(s->content));

    t = ft_lstnew(&k);
    ft_lstadd_front(&s, t);
    printf(" --> %d", *(int *)(s->content));

    t = ft_lstnew(&j);
    ft_lstadd_front(&s, t);
    printf(" --> %d\n", *(int *)(s->content));

    printf("-------\n");

    t_list *temp = s;
    while (temp != NULL)
    {
        printf(" --> %d", *(int *)(temp->content));
        temp = temp->next;
    }
    printf("\n");
    printf("-------\n");

    t = ft_lstlast(s);
    printf("%d\n", *(int *)(t->content));

    printf("-------\n");

    return (0);
}