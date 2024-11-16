/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:51:34 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 17:26:35 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    int len_s1;
    int len_s2;
    int i;
    int j;
    
    if (s1 == NULL || s2 == NULL)
        return NULL;
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    i = 0;
    j = 0;
    res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
    while (i < len_s1)
    {
        res[i] = s1[i];
        i++;
    }
    while (j < len_s2)
    {
        res[i + j] = s2[j];
        j++;
    }
    res[i + j] = '\0';
    return (res);
}