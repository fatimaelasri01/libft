/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/08 14:52:01 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/08 19:51:06 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	putnb(char *s, int n, int f)
{
	*s = '\0';
	if (n == 0)
	{
		s--;
		*s = '0';
	}
	while (n > 0)
	{
		s--;
		*s = (n % 10) + '0';
		n = n / 10;
	}
	if (f == -1)
	{
		s--;
		*s = '-';
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	char	*p;
	int		len;
	int		f;

	f = 1;
	if (n == -2147483648)
		res = ft_strdup("-2147483648");
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			f = -1;
		}
		len = count_nb(n);
		if (f == -1)
			len++;
		res = (char *)malloc((len + 1) * sizeof(char));
		if (!res)
			return (NULL);
		p = res;
		putnb((p + len), n, f);
	}
	return (res);
}
