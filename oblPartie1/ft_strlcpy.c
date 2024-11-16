/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:09:10 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 16:38:31 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
    }
    return (len);
}
int main()
{
    char *p[10];
    printf("%zu\n%zu\n",strlcpy(NULL, "fghjkl", 0),ft_strlcpy(NULL, NULL, 0));
}