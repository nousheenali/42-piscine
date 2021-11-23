/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:23:27 by nali              #+#    #+#             */
/*   Updated: 2021/05/29 21:38:53 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_assign_array(int board[4][4], int *input);

void	ft_print_array(int board[4][4]);

void	ft_lookfor_four_1(int board[4][4], int *input, int pos)
{
    int fill;

    fill = 0;
    while ((input[pos]) && pos <= 15)
    {
        if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
            while (fill < 4)
            {
                board[pos % 4][fill] = fill + 1;
                fill++;
            }
        fill = 4;
        if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
            while (fill > 0)
            {
                board[pos % 4][4 - fill] = fill;
                fill--;
            }
        pos++;
    }
}

void	ft_lookfor_four_0(int board[4][4], int *input)
{
    int pos;
    int fill;

    pos = 0;
    fill = 0;
    while ((input[pos]) && pos < 8)
    {
        if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
            while (fill < 4)
            {
                board[fill][pos] = fill + 1;
                fill++;
            }
        fill = 4;
        if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
            while (fill > 0)
            {
                board[4 - fill][(pos % 4)] = fill;
                fill--;
            }
        pos++;
    }
    ft_lookfor_four_1(board, input, pos);
}

void	ft_lookfor_one(int board[4][4], int *input)
{
    int pos;

    pos = 0;
    while (input[pos])
    {
        if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
            board[0][pos] = 4;
        if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
            board[3][pos - 4] = 4;
        if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
            board[pos - 8][0] = 4;
        if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
            board[pos - 12][3] = 4;
        pos++;
    }
    return ;
}

int		ft_initboard(int *input)
{
    int		row;
    int		col;
    int		board[4][4];

    row = 0;
    col = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            board[row][col] = 0;
            col++;
        }
        row++;
    }
    ft_lookfor_one(board, input);
    ft_lookfor_four_0(board, input);
    if ((ft_assign_array(board, input)) == 1)
        ft_print_array(board);
    else
        write(1, "\nError - No Solution\n\n", 22);
    return (0);
}
