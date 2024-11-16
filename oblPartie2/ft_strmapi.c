/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:17:27 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/09 12:03:55 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char crypte(unsigned int i, char c)
{
    c = c + i;
    return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *res;
    unsigned char   i;
    int len;
    
    if (s == NULL)
        return (NULL);
    len = ft_strlen(s);
    res = (char *)malloc((len + 1) *sizeof(char));
    if (res == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main()
{
    char const *s = "hello world";
    
    char (*p)(unsigned int, char);
    p = crypte;
    printf("%s", ft_strmapi(s, p));
}