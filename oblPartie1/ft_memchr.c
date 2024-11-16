/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:00 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/10 17:38:22 by fel-asri         ###   ########.fr       */
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
    if (n == 0)
		return (NULL);
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
printf("%s\n", ft_memchr(NULL, 'h',0));
printf("%s", memchr(s, 'h', 3));
}