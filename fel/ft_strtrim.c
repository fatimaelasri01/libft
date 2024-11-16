/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:12:31 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 20:06:34 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check_char(char const *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != c)
        i++;
    if (str[i] == c)
        return (1);
    else
        return (0);
}

static void start_end_idx(char const *str, char const *set, int *s, int *e)
{
    int len;
    int i;

    len = ft_strlen(str);
    i = 0;
    while (str[i] != '\0' && check_char(set, str[i]))
        i++;
    (*s) = i;
    i = len - 1;
    while (i >= (*s) && check_char(set, str[i]))
        i--;
    (*e) = i; 
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int start;
    int end;
    int i;
    int j;
    
    i = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    start_end_idx(s1, set, &start, &end);
    res = (char *)malloc((end - start + 2) * sizeof(char));
    if (res == NULL)
        return (NULL);
    j = (start);
    while (j <= (end))
    {
        res [i] = s1[j];
        i++;
        j++;
    }
    res [i] = '\0';
    return (res);
}
