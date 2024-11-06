/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:00 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/27 17:44:46 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *t;
    unsigned char r;
    size_t i;

    t = (const unsigned char *)s;
    r = (unsigned char)c;
    i = 0;
    while (t[i] != '\0' && t[i] != r && i < n)
        i++;
    if (t[i] == r)
        return ((unsigned char *)(t + i));
    else
        return (NULL);
}
int main()
{
char s[]= "hello world";
printf("%s", ft_memchr(s, 'l',7));
printf("%s", memchr(s, 'l', 7));
}