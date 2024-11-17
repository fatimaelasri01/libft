/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:02:12 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 11:31:37 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if ((d == NULL && s == NULL) || (d == NULL && len == 0))
		return (NULL);
	if (d < s)
	{
		while (i++ < len)
			d[i - 1] = s[i - 1];
	}
	else
	{
		while (i < len)
		{
			d[len - 1 - i] = s[len - 1 - i];
			i++;
		}
	}
	return (dst);
}
