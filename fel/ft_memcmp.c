/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:51:26 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 17:51:54 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *t1;
	const unsigned char *t2;
	size_t i;

	t1 = (const unsigned char *)s1;
	t2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && t1[i] == t2[i])
		i++;
	if (n == i)
		return (0);
	return (t1[i] - t2[i]);
}