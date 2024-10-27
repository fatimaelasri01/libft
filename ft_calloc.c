/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:18:25 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/27 20:15:21 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
void *calloc(size_t count, size_t size)
{
    unsigned char *t;
    size_t i;
    t = (unsigned char *)malloc(sizeof(size));
    i = 0;
    while (i < count)
    {
        t[i] = 0;
    }
    return (t);
}

int main()
{
    int *t;
    t = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
        printf("%d", t[i]);
}