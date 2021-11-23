/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:07:18 by nali              #+#    #+#             */
/*   Updated: 2021/05/27 16:02:30 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_findlen(int nb)
{
	int		count;

	count = 0;
	if (nb == 0)
	{
		return (1);
	}
	while (nb)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int		ft_getdenominator(int d)
{
	int		i;

	i = 1;
	while (d != 0)
	{
		i = i * 10;
		d--;
	}
	return (i);
}

int		ft_chksign(int n)
{
	int		sign;

	sign = -1;
	if (n < 0)
	{
		n = n * sign;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int		len;
	int		den;
	int		digit;
	int		new_num;
	int		i;

	i = 0;
	new_num  = ft_chksign(nb);
	len = ft_findlen(new_num);
	den = ft_getdenominator(len - 1);
	while (den != 0)
	{
		if (nb < 0 && i == 0)
		{
			ft_putchar('-');
		}
		digit = new_num / den;
		ft_putchar(digit + '0');
		new_num = new_num - (digit * den);
		den = den / 10;
		i++;
	}
}
