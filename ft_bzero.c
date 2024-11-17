/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:58:29 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 16:51:01 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*res;
	size_t			i;

	res = (unsigned char *)s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			res[i] = 0;
			i++;
		}
	}
}

#include "string.h"
#include "stdio.h"

int main()
{
	int t[] = {1, 23, 4};
	
	ft_bzero(t, 12);

	printf("%d\n", t[0]);	
	printf("%d\n", t[1]);
	printf("%d\n", t[2]);
	
	return (0);
}