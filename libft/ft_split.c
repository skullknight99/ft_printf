/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:16:03 by acmaghou          #+#    #+#             */
/*   Updated: 2021/11/15 18:27:44 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	check;

	len = 0;
	i = 0;
	check = 1;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (check)
				len++;
			check = 0;
		}
		else
			check = 1;
		i++;
	}
	return (len);
}

static char	*allocate(const char *s, char del)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != del)
		i++;
	str = (char *)malloc(i + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

static char	**freemem(char **arr, size_t index)
{
	while (index > 0)
	{
		free(arr[index]);
		index--;
	}
	free(arr);
	return (NULL);
}

static char	**splitstrs(char **arr, char *str, char del)
{
	size_t	check;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	check = 1;
	while (str[++i])
	{
		if (str[i] != del)
		{
			if (check)
			{
				arr[j] = allocate(str + i, del);
				if (arr[j] == NULL)
					return (freemem(arr, j));
				j++;
			}
			check = 0;
		}
		else
			check = 1;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**td_arr;

	if (!s)
		return (NULL);
	td_arr = (char **)malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (!td_arr)
		return (NULL);
	return (splitstrs(td_arr, (char *)s, c));
}
