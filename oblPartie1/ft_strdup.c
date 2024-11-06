/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:20:35 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 12:59:23 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

#include <string.h>
char *ft_strdup(const char *s1)
{
    char *res;
    int len;
    int i;

    len = ft_strlen(s1);
    i = 0;
    res = (char *)malloc((len + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    while (i < len)
    {
        res[i] = s1[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main()
{
    const char *s = NULL;
    char *r;
    r = strdup(s);
    printf("%s", r);
    return 0;
}