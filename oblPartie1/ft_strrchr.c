/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:02:58 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/25 19:02:58 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *strrchr(const char *s, int c)
{
    int len;
    char *p;

    len = ft_strlen(s) - 1;
    while(s[len] != (char)c && len >= 0)
        len--;
    if (s[len] == (char)c)
    {
        p = &s[len];
        return (p);
    }
    else
        return (NULL)
}