/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:51:26 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/27 18:59:20 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *t1;
    const unsigned char *t2;
    size_t i;

    t1 = (const unsigned char *)s1;
    t2 = (const unsigned char *)s2;
    i = 0;
    while (t1[i] == t2[i] && i < n)
        i++;
    if (n == i)
        return (0);
    return (t1[i] - t2[i]);
}

int main()
{
    char s1[] = "hello cv";
    char s2[] = "hello cv";
    printf("%d \n", ft_memcmp(s1, s2, 12));
    printf("%d", memcmp(s1, s2, 12));
    return (0);
}