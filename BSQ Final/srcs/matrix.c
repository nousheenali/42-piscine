/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:29:08 by nali              #+#    #+#             */
/*   Updated: 2021/06/07 21:00:13 by iarikupu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		**ft_fill_sum_matrix(int **s_m, char **map)
{
	int		r;
	int		c;
	int		a;

	s_m = ft_copy_row_col(s_m, map);
	r = 1;
	while (r < g_num_lines)
	{
		c = 1;
		while (c < g_linelength)
		{
			if (map[r][c] == g_symbols[0])
			{
				a = ft_min(s_m[r][c - 1], s_m[r - 1][c - 1], s_m[r - 1][c]);
				s_m[r][c] = a + 1;
			}
			else
				s_m[r][c] = 0;
			c++;
		}
		r++;
	}
	return (s_m);
}

int		**ft_copy_row_col(int **sum_matrix, char **map)
{
	int		c;
	int		r;

	r = 0;
	while (r < g_num_lines)
	{
		if (map[r][0] == g_symbols[0])
			sum_matrix[r][0] = 1;
		else
			sum_matrix[r][0] = 0;
		r++;
	}
	c = 0;
	while (c < g_linelength)
	{
		if (map[0][c] == g_symbols[0])
			sum_matrix[0][c] = 1;
		else
			sum_matrix[0][c] = 0;
		c++;
	}
	return (sum_matrix);
}

int		ft_find_bsq(int **sum_matrix)
{
	int		r;
	int		c;
	int		bsq;

	bsq = sum_matrix[0][0];
	r = 0;
	while (r < g_num_lines)
	{
		c = 0;
		while (c < g_linelength)
		{
			if (sum_matrix[r][c] > bsq)
			{
				bsq = sum_matrix[r][c];
				g_max_row = r;
				g_max_col = c;
			}
			c++;
		}
		r++;
	}
	return (bsq);
}

void	ft_destroy_matrix(int **matrix)
{
	int		r;

	r = 0;
	while (r < g_num_lines)
	{
		free(matrix[r]);
		r++;
	}
	free(matrix);
}
