/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/17 09:51:57 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 09:51:57 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*t;

	count = 0;
	t = lst;
	while (t != NULL)
	{
		t = t->next;
		count++;
	}
	return (count);
}
