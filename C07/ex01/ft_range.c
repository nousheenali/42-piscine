/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:00:14 by nali              #+#    #+#             */
/*   Updated: 2021/06/04 12:32:01 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;
	int	j;

	j = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	else
	{
		range = max - min;
		i = min;
		arr = (int *)malloc((range) * sizeof(int));
		if (arr != NULL)
		{
			while (i < max)
			{
				arr[j++] = i++;
			}
		}
		return (arr);
	}
}
