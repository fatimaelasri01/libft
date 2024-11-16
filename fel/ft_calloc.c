/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:18:25 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/10 15:56:37 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*t;
	size_t			i;

	t = (unsigned char *)malloc(count * size);
	i = 0;
	if (t == NULL)
		return (NULL);
	while (i < count * size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
