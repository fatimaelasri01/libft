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


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res;
    int len_s;
    int i;
    int j;
    
    len_s = ft_strlen(s);
    i = start;
    j = 0;
    if (s == NULL || start > len_s)
      return (NULL);
    if ((len_s - start) < len)
      len = len_s - start;
    res = (char *)malloc((len + 1) * sizeof(char));  
    while (j < len)
    {
        res[j] = s[i];
        i++;
        j++;
    }
    res[j] = '\0';
    return (res);
}
int main()
{
  const char *s = "hey cv ff";
  char *r;
  r = ft_substr(s, 2, 3);
  printf("%s", r);
  return 0;
}