/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:02:12 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/27 17:04:18 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>


void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    i = 0;
    if (d <= s)
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (i < len)
        {
            d[len - 1 - i] = s[len -1 - i];
            i++;
        }
    }
    return (dst);
}
int main()
{
    // array int

    /*int s[3] = {1, 2, 3};
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
    
    ft_memcpy(d, s, 6*sizeof(int));
    
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
    memcpy(d, s, 6 * sizeof(int));
    
    printf("Après memcpy de 3 éléments:\n");
    printf("Source: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", s[i]);
    printf("\n");
    
    printf("Destination: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", d[i]);
    printf("\n");

    
*/

// array string
   /* const char s2[] = "cv hhhhh! ";
    char d2[] = "hello cv";
    const char s3[] = "cv hhhhh! ";
    char d3[] = "hello cv";
    printf("1:  %s \n", d2);
    ft_memmove(d2, s2, 5);
    printf("1:  %s \n", d2);
    printf("\n--------------\n");
    
    printf("2:   %s \n", d3);
    memmove(d3, s3, 5);
    printf("2:   %s \n", d3);
*/
    // Cas 1 : Sans chevauchement
    char str1[] = "Hello World";
    char str2[] = "Hello World";
    printf("Avant: %s\n", str1);
    
    // Copie "World" au début
     // Déplace "World" au début
    printf("Après: %s\n\n", memmove(str1+1, str1, 11));

    

printf("\n---------------------------\n");

 printf("Avant: %s\n", str2);
    
    // Copie "World" au début
      // Déplace "World" au début
    printf("Après: %s\n\n",ft_memmove(str2+1, str2, 11));


    
    return 0;
}