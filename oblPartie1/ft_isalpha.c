/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:32:15 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/22 10:33:27 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	if(argc != 2)
		write(1, "erreur", 6);
	else
	{
		if(ft_isalpha(argv[1][0]))
		{
			write(1, &argv[1][0], 1);
			write(1, " is alpha", 9);
		}
		else
		{
			write(1, &argv[1][0], 1);
			write(1, " is not alpha",13);
		}
	}	
	return (0);
}
