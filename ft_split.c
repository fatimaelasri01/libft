/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <fel-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:25:42 by fel-asri          #+#    #+#             */
/*   Updated: 2024/11/17 20:28:10 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *str, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] == c)
		i++;
	if (str[i])
	{
		nb = 1;
		while (str[i])
		{
			if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
				nb++;
			i++;
		}
	}
	return (nb);
}

static char	*copy(char const *str, char c, int *idx)
{
	char	*res;
	int		tmp;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tmp = *idx;
	if (!str)
		return (NULL);
	while (str[*idx] && str[*idx] != c)
	{
		(*idx)++;
		i++;
	}
	res = (char *)malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (j < i)
	{
		res[j++] = str[tmp];
		tmp++;
	}
	res[j] = '\0';
	return (res);
}

static void	free_arr(char ***arr, int i)
{
	while (i >= 0)
		free((*arr)[i--]);
	free(*arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		idx;

	arr = NULL;
	i = 0;
	if (!s)
		return (NULL);
	idx = 0;
	arr = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < count(s, c))
	{
		while (s[idx] == c)
			idx++;
		arr[i] = copy(s, c, &idx);
		if (!arr[i++])
		{
			free_arr(&arr, i - 1);
			return (NULL);
		}
	}
	arr[i] = NULL;
	return (arr);
}
