/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:28:22 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 09:54:58 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	res;
	unsigned char	*p;
	size_t			i;

	res = (unsigned char)c;
	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = res;
		i++;
	}
	return (b);
}
