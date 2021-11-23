/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:36:29 by nali              #+#    #+#             */
/*   Updated: 2021/06/04 11:40:30 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int len;

	j = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		len = max - min;
		if ((*range = (int*)malloc(len * sizeof(int))) != NULL)
		{
			while (min < max)
			{
				*(*range + j) = min;
				min++;
				j++;
			}
			return (len);
		}
		else
			return (-1);
	}
}
