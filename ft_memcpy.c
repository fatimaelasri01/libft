/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:01:08 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/27 12:08:43 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;

    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    } 
    return (dst);
}
int main()
{
    // array int

    /*
    int s[5] = {1, 2, 3, 4, 5};
    int d[5] = {0, 0, 0, 0, 0};
    printf("Avant memcpy:\n");
    printf("Source: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", s[i]);
    printf("\n");
    
    printf("Destination: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", d[i]);
    printf("\n\n");
    
    ft_memcpy(d, s, 13);
    
    printf("Après ft_memcpy de 3 éléments:\n");
    printf("Source: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", s[i]);
    printf("\n");
    
    printf("Destination: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", d[i]);
    printf("\n");

    s[0] = 1;
    s[1] = 2;
    s[2] = 3;
    s[3] = 4;
    s[4] = 5;
    memcpy(d, s, 13);
    
    printf("Après memcpy de 3 éléments:\n");
    printf("Source: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", s[i]);
    printf("\n");
    
    printf("Destination: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", d[i]);
    printf("\n"); */

    


    // array string
   const char s2[] = "cv ! ";
    char d2[] = "hello cv";
    const char s3[] = "cv ! ";
    char d3[] = "hello cv";
    printf("1:  %s \n", d2);
    ft_memcpy(d2, s2, 4);
    printf("1:  %s \n", d2);
    printf("\n--------------\n");
    
   printf("2:   %s \n", d3);
    memcpy(d3, s3, 4);
    printf("2:   %s \n", d3);
    
    
    return 0;
}