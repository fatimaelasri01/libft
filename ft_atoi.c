/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:52:46 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 15:53:03 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long		nbr;
	int						signe;
	int						i;

	nbr = 0;
	signe = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i++] == '-')
			signe *= (-1);
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((nbr > 922337203685477580 || (nbr == 922337203685477580
					&& (str[i] - '0') > 7)) && signe == 1)
			return (-1);
		if ((nbr > 922337203685477580 || (nbr == 922337203685477580
					&& (str[i] - '0') > 8)) && signe == -1)
			return (0);
		nbr = (nbr * 10) + (str[i++] - '0');
	}
	return (nbr * signe);
}
#include <stdio.h>

int main()
{
	const char *s = "-4922337203685477580888888";

	printf("%d \n", ft_atoi(s));
	printf("%d \n", atoi(s));
	
	return (0);
}
