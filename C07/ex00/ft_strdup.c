/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:30:01 by nali              #+#    #+#             */
/*   Updated: 2021/06/04 11:28:26 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int count;

	count = 0;
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	char	*ptr;

	len = ft_strlen(src);
	str = (char *)malloc(len * sizeof(char));
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
