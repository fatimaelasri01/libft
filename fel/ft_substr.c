/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:47:35 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 13:50:57 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res;
    unsigned int len_s;
    size_t i;
    size_t j;
    
    if (s == NULL)
      return (NULL);
    len_s = ft_strlen(s);
    i = (size_t)start;
    j = 0;
    if (start > len_s)
      return (ft_strdup(""));
    if ((len_s - start) < len)
      len = len_s - start;
    res = (char *)malloc((len + 1) * sizeof(char));
    if(!res)
      return NULL;
    while (j < len)
    {
        res[j] = s[i];
        i++;
        j++;
    }
    res[j] = '\0';
    return (res);
}
