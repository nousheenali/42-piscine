/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:29:33 by nali              #+#    #+#             */
/*   Updated: 2021/05/23 10:13:46 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int min_val;
	int j;
	int i;

	i = 0;
	while (i < size)
	{
		min_val = *(tab + i);
		j = i + 1;
		while (j < size)
		{
			if (min_val > *(tab + j))
			{
				min_val = *(tab + j);
				*(tab + j) = *(tab + i);
				*(tab + i) = min_val;
			}
			j++;
		}
		i++;
	}
}
