/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:09:10 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/25 16:09:10 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t i;
    size_t len;

    i = 0;
    len = 0;
    while (src[len] != '\0')
        len++;
    if (size != 0)
    {
        while (str[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
    }
    return (len);
}