/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:55:03 by nali              #+#    #+#             */
/*   Updated: 2021/05/29 22:00:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_array(int board[4][4])
{
    int	row;
    int col;

    row = 0;
    col = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            ft_putchar(board[row][col] + '0');
            (col == 3) ? col++ : ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}
