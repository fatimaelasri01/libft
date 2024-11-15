/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:58:29 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/26 19:08:32 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *res;
    int i;

    res = (unsigned char *)s;
    i = 0;
    if (n != 0)
    {
        while(i < n)
        {
            res[i] = 0;
            i++;
        }
    }                                                                                                                      
}
int main() {
  char s[]= "hello cv";
  ft_bzero(s, 4);
  printf("%s\n\n",s);
  
  bzero(s, 4);
  printf("%s",s);
  return 0;
}