/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:28:22 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/08 19:10:44 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   res;
    unsigned char   *p;
    size_t i;

    res = (unsigned char)c;
    p = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        p[i] = res;
        i++;
    }
    return b;
}
#include <stdio.h>
int main()
{
    int b;

    b = -1;
    /*
    ft_memset(&b,256 / 256,2);
    ft_memset(&b, 256,1);
    printf("%d \n",b);
*/
//    ft_memset(&b, -1,4);
    ft_memset(&b,(-768 / 256),2);
    ft_memset(&b, -768,1);
    printf("%d",b);
    char t[]="hello"; //2024

    

    printf("%s",t);
}