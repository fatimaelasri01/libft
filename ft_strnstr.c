/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:29:32 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 13:24:36 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	char	*s;
	char	*f;

	i = 0;
	if (!(*find))
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (str[i] && (i + ft_strlen(find)) <= len)
	{
		if (str[i] == find[0])
		{
			s = (char *)&str[i];
			f = (char *)find;
			while (*s && *f && *s++ == *f)
				f++;
			if (!(*f))
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
