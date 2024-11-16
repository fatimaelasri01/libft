/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:04:14 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 17:21:08 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char   *s1, const char *s2, size_t n)
{
	size_t  i;

	i = 0;
	while ( i < n && s1[i] != '\0' && s2[i] != '\0' && (unsigned char) s1[i] == (unsigned char) s2[i] )
		i++;
	if(i==n)
		return 0;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}