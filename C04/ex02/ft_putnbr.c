/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:07:18 by nali              #+#    #+#             */
/*   Updated: 2021/05/29 10:58:35 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_lowest_limit(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	int num;

	num = nb;
	if (num == -2147483648)
	{
		ft_lowest_limit();
	}
	if (num < 0 && num != -2147483648)
	{
		num *= -1;
		ft_putchar('-');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	if (num != -2147483648)
	{
		ft_putchar(num % 10 + 48);
	}
}
