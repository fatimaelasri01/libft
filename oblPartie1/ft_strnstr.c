/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:29:32 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 09:31:13 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t  i;
    char    *s;
    char    *f;

    i = 0;
    if (len == 0)
        return (NULL);
    if (!(*find))
        return ((char *)str);
    while (str[i] && i < len)
    {
        if (str[i] == find[0])
        {
            s = (char *)&str[i];
            f = (char *)find;
            while (*s && *f && *s == *f++)
                s++;
            if (!(*f))
                return ((char *)&str[i]);
        }
        i++;
    }
    return (NULL);
}
int main() {
  const char *s = "ee h ffh";
  const char *f = "h";
  printf("%s\n", ft_strnstr(NULL, f, 2));
  printf("%s\n", strnstr("NULL", NULL, 3));
   return 0;
}