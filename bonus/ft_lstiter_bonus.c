/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:54:41 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 12:18:46 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void ft(void *c)
{
   *(int *)c *= -1;
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

    t = ft_lstnew(&c);
    ft_lstadd_front(&s, t);
    printf("%d", *(int *)(s->content));

    t = ft_lstnew(&k);
    ft_lstadd_front(&s, t);
    printf(" --> %d", *(int *)(s->content));

    t = ft_lstnew(&j);
    ft_lstadd_front(&s, t);
    printf(" --> %d\n", *(int *)(s->content));

    printf("****************-------\n");

    t_list *temp = s;
    while (temp != NULL)
    {
        printf(" --> %d", *(int *)(temp->content));
        temp = temp->next;
    }
    printf("\n");
    printf("****************************************-------\n");

    ft_lstiter(s, ft);

    printf("\n");
    printf("****************************************-------\n");
    
    temp = s;
    while (temp != NULL)
    {
        printf(" --> %d", *(int *)(temp->content));
        temp = temp->next;
    }
    printf("\n");
    printf("****************************************-------\n");
    
    return (0);
}
