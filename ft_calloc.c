/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:18:25 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 17:43:54 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*t;
	size_t			i;
	size_t			m;

	m = count * size;
	if (m == 0)
		return (malloc(0));
	if ((m / count) != size)
		return (NULL);
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
#include <stdio.h>
int main()
{
	int *t;
	int *p;
	
	t = ft_calloc(4, sizeof(char));
	printf("%d", *t);
    printf("-------------");
	p = calloc(4, 4);	
	printf("%d", *p);
}