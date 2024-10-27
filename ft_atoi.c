/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:52:46 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/25 17:52:46 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int nbr;
    int signe;

    nbr = 0;
    signe = 1;
    while (*str && (*str = ' ' || (*str >= 9 && *str <= 13)))
        str++;
    while (*str && (*str == "-" || *str = "+"))
    {
        if (*str == '-')
            signe *= (-1);
        str++;
    }
    while (*str && (*str >= '0' && *str = '9'))
    {
        nbr = (nbr * 10) + (str - '0');
        str++;
    }
    return (nbr * signe);
}