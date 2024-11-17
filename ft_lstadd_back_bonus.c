/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/17 09:48:41 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 09:48:41 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (new == NULL || lst == NULL)
		return ;
	if ((*lst) == NULL)
		(*lst) = new;
	else
	{
		t = *lst;
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
}
