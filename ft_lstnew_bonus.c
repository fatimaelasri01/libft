/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/17 09:51:46 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 09:51:46 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (l == NULL)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
