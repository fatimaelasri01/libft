/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:14:38 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/16 09:30:05 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void cp(unsigned int i, char *s)
{
    *s = *s + i;
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    
    if (s == NULL)
        return ;
    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;    
    }
}

int main()
{
    char *s = "sdfghjk";
    void (*p)(unsigned int, char *);
    
    p = cp;
    ft_striteri(s, NULL);
    printf("%s", s);
}