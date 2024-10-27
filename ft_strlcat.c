/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:51:15 by fel-asri          #+#    #+#             */
/*   Updated: 2024/10/25 16:51:15 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t size_dst;
    size_t size_src;

    size_dst = ft_strlen(dst);
    size_src = ft_strlen(src);
    if (dstsize == 0)
        return (size_src);
    if (dstsize < size_dst)
        return (dstsize + size_src);
    else
    {
        i = 0;
        while (src[i] != '\0' && (i + size_dst) < dstsize)
        {
            dst[i + size_dst] = src[i];
            i++;
        }
        dst[i + size_dst] = '\0';     
    }
    return (size_dst + size_src);
}