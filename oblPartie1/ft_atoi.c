/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:52:46 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/08 13:39:02 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int nbr;
    int signe;
    int i;

    nbr = 0;
    signe = 1;
    i = 0;
    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    while (str[i] && (str[i] == '-' || str[i] == '+'))
    {
        if (str[i] == '-')
            signe *= (-1);
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }
    return (nbr * signe);
}