/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:29:32 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 18:28:31 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char  *str, const char    *find, size_t   len)
{
	size_t  i;

	i = 0;
	if ( str == NULL && len ==0)
		return (NULL);
	if(ft_strlen(find) == 0)
		return ((char  *)str);
	while (str[i] && i + ft_strlen(find) <= len)
	{
		if (str[i] == find[0])
		{
			if(ft_strncmp(str+i,find,ft_strlen(find))==0)
				return ((char *)str+i);
		}
		i++;
	}
	return (NULL);
}
