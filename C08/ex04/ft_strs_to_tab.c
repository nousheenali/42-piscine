/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:42:12 by nali              #+#    #+#             */
/*   Updated: 2021/06/05 22:20:07 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

char				*ft_strdup(char *src)
{
	int		len;
	char	*str;
	char	*ptr;

	len = ft_strlen(src);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (str != NULL)
	{
		ptr = str;
		if (str != NULL)
		{
			while (*src)
			{
				*str = *src;
				str++;
				src++;
			}
			*str = '\0';
		}
		return (ptr);
	}
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr1;
	int			i;

	i = 0;
	arr1 = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr1 != NULL)
	{
		while (i < ac)
		{
			arr1[i].size = ft_strlen(av[i]);
			arr1[i].str = av[i];
			arr1[i].copy = ft_strdup(av[i]);
			i++;
		}
		arr1[i] = (t_stock_str) {0, 0, 0};
		return (arr1);
	}
	return (arr1);
}
