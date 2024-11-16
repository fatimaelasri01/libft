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

    nb = ft_lstsize(s);
    printf(" %d\n", nb);

    return (0);
}