/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:14:53 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 09:30:23 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *p;

    p = (char *)s;
    while (*p && *p != (char)c)
        p++;
    if (*p == (char)c)
    {
        return (p);
    }
    else
        return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char *s = "abcde";
    
    printf("%s\n", ft_strchr("", 'c'));
    printf("%s\n", strchr(NULL, 0));
    return (0);
}