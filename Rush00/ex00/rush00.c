/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-hosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:21:51 by mal-hosa          #+#    #+#             */
/*   Updated: 2021/05/22 17:15:09 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_firstline(int x)
{
	int j;

	j = 0;
	ft_putchar('o');
	while (j < x - 2)
	{
		ft_putchar('-');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_midlines(int x)
{
	int j;

	j = 0;
	ft_putchar('|');
	while (j < x - 2)
	{
		ft_putchar(' ');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('|');
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
		if (y > 1)
		{
			ft_firstline(x);
		}
	}
}
