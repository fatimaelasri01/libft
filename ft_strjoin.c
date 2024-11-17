/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/06 13:51:34 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 17:26:35 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len_s1;
	int		len_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	len_s1 = 0;
	len_s2 = 0;
	if (!res)
		return (NULL);
	while (s1[len_s1])
	{
		res[len_s1] = s1[len_s1];
		len_s1++;
	}
	while (s2[len_s2])
	{
		res[len_s1 + len_s2] = s2[len_s2];
		len_s2++;
	}
	res[len_s1 + len_s2] = '\0';
	return (res);
}
