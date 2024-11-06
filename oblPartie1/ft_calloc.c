/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:18:25 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/06 10:19:40 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
void *ft_calloc(size_t count, size_t size)
{
    unsigned char *t;
    size_t i;
    t = (unsigned char *)malloc(count * size);
    i = 0;
    if (t == NULL)
        return (NULL);
    while (i < count * size)
    {
        t[i] = 0;
        i++;
    }
    return (t);
}

int main()
{
    int *t;
    int *p;
    t = (int *)ft_calloc(3, sizeof(int));
    if (t == NULL)
        printf("erreur");
    else
    {
        for (int i = 0; i < 3; i++)
        printf("%d", t[i]);
    }
    printf("\n");
    free(t);

    p = (int *)calloc(3, sizeof(int));
    if (p == NULL)
        printf("erreur");
    else
    {
        for (int i = 0; i < 3; i++)
        printf("%d", p[i]);
    }
    free(p);

    
    return 0;
}