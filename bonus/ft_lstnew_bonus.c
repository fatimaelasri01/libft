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

int main()
{
    int c =  1;
    char *s=NULL;
    t_list *t;
    
    t = ft_lstnew(&c);
    printf("%p\n", (int *)(t->content));
    printf("%d\n", *(int *)(t->content));
    
    t = ft_lstnew(s);
    printf("%s", (char *)(t->content));

    return (0);
}