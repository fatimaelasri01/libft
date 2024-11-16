/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:49:36 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 19:40:09 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*tmp;
	t_list	*par;
	t_list	*res;
	void	*p;
	
	par = lst;
	res = NULL;
	while (par)
	{
		p = f(par->content);
		tmp = ft_lstnew(p);
		if (tmp == NULL)
		{
			del(p);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, tmp);
		par = par->next;	
	}
	return (res);
}