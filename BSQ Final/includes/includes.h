/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:34:26 by nali              #+#    #+#             */
/*   Updated: 2021/06/08 19:56:59 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_get_length(int fd, char *buf);
void	ft_print_map(char **map);
int		**ft_make_sum_matrix(char **map);
int		**ft_fill_sum_matrix(int **sum_matrix, char **map);
int		**ft_copy_row_col(int **sum_matrix, char **map);
int		ft_min(int a, int b, int c);
void	ft_print_matrix(int **matrix);
void	ft_putchar(char c);
int		ft_find_bsq(int **sum_matrix);
void	ft_destroy_matrix(int **matrix);
char	**ft_insert_bsq(char **map, int bsq);
void	ft_destroy_map(char **map);
void	ft_putstr(char *str);
char	g_symbols[3];
char	g_empty;
char	g_obstacle;
char	g_full;
int		g_num_lines;
int		g_linelength;
int		g_max_row;
int		g_max_col;
#endif
