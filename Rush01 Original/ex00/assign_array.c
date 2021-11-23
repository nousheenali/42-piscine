/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:43:04 by nali              #+#    #+#             */
/*   Updated: 2021/05/29 21:47:32 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkboard(int board[4][4], int *in_num);

int		ft_lookfor_zero(int board[4][4], int *r, int *c)
{
    *r = 0;
    *c = 0;
    while (*r < 4)
    {
        *c = 0;
        while (*c < 4)
        {
            if (board[*r][*c] == 0)
                return (1);
            *c += 1;
        }
        *r += 1;
    }
    return (0);
}

int		ft_valid_col(int board[4][4], int col, int num)
{
    int row;

    row = 0;
    while (row < 4)
    {
        if (board[row][col] == num)
            return (0);
        row++;
    }
    return (1);
}

int		ft_valid_row(int board[4][4], int row, int num)
{
    int col;

    col = 0;
    while (col < 4)
    {
        if (board[row][col] == num)
            return (0);
        col++;
    }
    return (1);
}

int		ft_check_validity(int board[4][4], int r, int c, int num)
{
    if (((ft_valid_row(board, r, num)) && (ft_valid_col(board, c, num))
         && (board[r][c] == 0)))
        return (1);
    return (0);
}

int		ft_assign_array(int board[4][4], int *input)
{
    int row;
    int col;
    int i;
    int n;

    n = 1;
    i = 0;
    if ((ft_lookfor_zero(board, &row, &col) == 0) && (ft_checkboard(board, input) == 1))
        return (1);
    while (n <= 4)
    {
        if (ft_check_validity(board, row, col, n))
        {
            board[row][col] = n;
            if (ft_assign_array(board, input) == 1)
                return (1);
            board[row][col] = 0;
        }
        n++;
    }
    return (0);
}
