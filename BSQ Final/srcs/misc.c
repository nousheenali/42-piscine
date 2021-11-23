/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:29:43 by nali              #+#    #+#             */
/*   Updated: 2021/06/07 21:01:24 by iarikupu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		ft_get_length(int fd, char *buf)
{
	int		len;

	len = 0;
	read(fd, buf, 1);
	while (*buf != '\n')
	{
		len++;
		read(fd, buf, 1);
	}
	return (len);
}

void	ft_print_map(char **map)
{
	int		r;
	int		c;

	r = 0;
	while (r < g_num_lines)
	{
		c = 0;
		while (c < g_linelength)
		{
			write(1, &map[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

char	**ft_insert_bsq(char **map, int bsq)
{
	int		r;
	int		c;

	g_full = g_symbols[2];
	r = g_max_row - (bsq - 1);
	while (r <= g_max_row)
	{
		c = g_max_col - (bsq - 1);
		while (c <= g_max_col)
		{
			map[r][c] = g_full;
			c++;
		}
		r++;
	}
	return (map);
}

void	ft_destroy_map(char **map)
{
	int		r;

	r = 0;
	while (r < g_num_lines)
	{
		free(map[r]);
		r++;
	}
	free(map);
}
