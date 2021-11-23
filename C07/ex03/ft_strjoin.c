/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:52:19 by nali              #+#    #+#             */
/*   Updated: 2021/06/04 12:01:09 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_findlen(char **str, int size)
{
	int j;
	int l;
	int i;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			l++;
			j++;
		}
		i++;
	}
	l = l + (size - 2);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*new_str;

	i = 0;
	k = 0;
	if (size == 0)
	{
		new_str = (char *)malloc(1 * sizeof(char));
		return (new_str);
	}
	len = ft_findlen(&strs[0], size);
	new_str = (char *)malloc(len * sizeof(char));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			new_str[k++] = strs[i][j++];
		if (k < len)
			new_str[k++] = *sep;
		i++;
	}
	return (new_str);
}
