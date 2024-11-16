/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:02:58 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 19:53:13 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int len;
	
	len = ft_strlen(s);
	while(s[len] != (char)c && len > 0)
		len--;
	if (s[len] == (char)c)
		return ((char *)s+len);
	return (NULL);
}
