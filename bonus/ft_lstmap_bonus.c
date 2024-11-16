/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:49:36 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 14:01:00 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*tmp;
	t_list	*par;
	t_list	*res;

	par = lst;
	while (par)
	{
		tmp = ft_lstnew(f(par->content));
		if (tmp == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, tmp);
		par = par->next;	
	}
	return (res);
}

void	ff(void *c)
{
	(void)c;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while ((*lst) != NULL)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *t;

    if (new == NULL)
        return ;
    if ((*lst) == NULL)
        ft_lstadd_front(lst, new);
    else
    {
        t = *lst;
        while(t->next != NULL)
            t = t->next;
        new->next = NULL;
        t->next = new;
    }
}


void *ft(void *c)
{
   *(int *)c *= -6;
   return (c);
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
    t_list *t;
    t_list *s = NULL;
	t_list *r;

    t = ft_lstnew(&c);
    ft_lstadd_front(&s, t);
    printf("%d", *(int *)(s->content));

    t = ft_lstnew(&k);
    ft_lstadd_front(&s, t);
    printf(" --> %d", *(int *)(s->content));

    t = ft_lstnew(&j);
    ft_lstadd_front(&s, t);
    printf(" --> %d\n", *(int *)(s->content));

    printf("1****************-------\n");

    t_list *temp = s;
    while (temp != NULL)
    {
        printf(" --> %d", *(int *)(temp->content));
        temp = temp->next;
    }
    printf("\n");
    printf("2****************************************-------\n");

    
	r = ft_lstmap(s, ft, ff);
	
    printf("\n");
    printf("3****************************************-------\n");
    
    temp = r;
    while (temp != NULL)
    {
        printf(" --> %d", *(int *)(temp->content));
        temp = temp->next;
    }
    printf("\n");
    printf("4****************************************-------\n");
	
    return (0);
}
