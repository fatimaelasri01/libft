/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:58:29 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 15:55:26 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *res;
	size_t i;

	res = (unsigned char *)s;
	i = 0;
	if (n != 0)
	{
		while(i < n)
		{
			res[i] = 0;
			i++;
		}
	}                                                                                                                      
}