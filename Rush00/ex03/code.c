/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-hosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:21:51 by mal-hosa          #+#    #+#             */
/*   Updated: 2021/05/21 23:45:02 by mal-hosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_firstline(int x)
{
	int j;

	j = 0;
	ft_putchar('A');
	while (j < x - 2)
	{
		ft_putchar('B');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_midlines(int x)
{
	int j;

	j = 0;
	ft_putchar('B');
	while (j < x - 2)
	{
		ft_putchar(' ');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_lastline(int x)
{
	int j;

	j = 0;
	ft_putchar('C');
	while (j < x - 2)
	{
		ft_putchar('B');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	if (x > 0 && y > 0)
	{
		ft_firstline(x);
		while (j < y - 2)
		{
			ft_midlines(x);
			j++;
		}
	}
	if (x >= 1 && y > 1)
	{
		ft_firstline(x);
	}
}

int	main(void)
{
	rush(1, 6);
	write (1, "\n", 1);
	rush(7, 1);
	write (1, "\n", 1);

	rush(8, 5);
	write (1, "\n", 1);

	return (0);
}
