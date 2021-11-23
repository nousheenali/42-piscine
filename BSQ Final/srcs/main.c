/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:48:59 by nali              #+#    #+#             */
/*   Updated: 2021/06/08 19:38:48 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	**ft_make_arr(char *buf, char *argv, char **map)
{
	int	r;
	int c;
	int fd;

	fd = open(argv, O_RDONLY);
	r = 0;
	*buf = 0;
	while (*buf != '\n')
		read(fd, buf, 1);
	while ((read(fd, buf, 1)))
	{
		c = 0;
		while (*buf != '\n')
		{
			map[r][c] = *buf;
			read(fd, buf, 1);
			c++;
		}
		map[r][c] = '\0';
		r++;
	}
	map[r] = 0;
	close(fd);
	return (map);
}

char	**ft_prepare_arr(char *buf, char *argv)
{
	char	**map;
	int		fd;
	int		i;
	int		j;

	fd = open(argv, O_RDONLY);
	g_num_lines = 0;
	j = 0;
	while (*buf != '\n')
	{
		read(fd, buf, 1);
		if (*buf >= '0' && *buf <= '9')
			g_num_lines = g_num_lines * 10 + *buf - '0';
		else
			g_symbols[j++] = *buf;
	}
	g_linelength = ft_get_length(fd, buf);
	map = (char **)malloc((sizeof(char *) * (g_num_lines + 1)));
	i = 0;
	while (i < g_num_lines)
		map[i++] = (char *)malloc((sizeof(char) * g_linelength) + 1);
	close(fd);
	map = ft_make_arr(buf, argv, map);
	return (map);
}

char	**ft_solve_map(char **map)
{
	int		**sum_matrix;
	int		bsq;

	sum_matrix = ft_make_sum_matrix(map);
	bsq = ft_find_bsq(sum_matrix);
	ft_destroy_matrix(sum_matrix);
	map = ft_insert_bsq(map, bsq);
	return (map);
}

int		**ft_make_sum_matrix(char **map)
{
	int				**sum_matrix;
	int				i;
	int				size;

	size = g_num_lines + 1;
	sum_matrix = (int **)malloc((sizeof(int *) * size) + sizeof(int));
	i = 0;
	while (i < g_num_lines)
		sum_matrix[i++] = (int *)malloc(sizeof(int) * g_linelength);
	sum_matrix = ft_fill_sum_matrix(sum_matrix, map);
	return (sum_matrix);
}

int		main(int argc, char **argv)
{
	char	buf;
	char	**map;

	if (argc == 1)
		ft_putstr("Usage: ./a.out map(s)");
	while (*++argv)
	{
		buf = 0;
		map = ft_prepare_arr(&buf, *argv);
		ft_solve_map(map);
		ft_print_map(map);
		ft_destroy_map(map);
		ft_putstr("\n");
	}
	return (0);
}
