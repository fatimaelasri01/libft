/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:30:31 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/22 11:35:50 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
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
		if(ft_isdigit(argv[1][0]))
		{
			write(1, &argv[1][0], 1);
			write(1, " is digit", 9);
		}
		else
		{
			write(1, &argv[1][0], 1);
			write(1, " is not digit",13);
		}
	}	
	return (0);
}
