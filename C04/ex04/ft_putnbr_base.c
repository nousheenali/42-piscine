/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:14:58 by nali              #+#    #+#             */
/*   Updated: 2021/05/30 09:46:07 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ft_tobase(int nbr, char *base, int radix)
{
	int	i;
	int	j;
	int	arr[10];

	j = 0;
	while (nbr != 0)
	{
		i = nbr % radix;
		arr[j] = base[i];
		nbr = nbr / radix;
		j++;
	}
	j--;
	while (j >= 0)
	{
		ft_putchar(arr[j]);
		j--;
	}
	ft_putchar('\n');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		d;
	int		b;
	int		o;
	int		h;
	char	*arr;

	d = ft_strcmp(base, "0123456789");
	b = ft_strcmp(base, "01");
	h = ft_strcmp(base, "0123456789ABCDEF");
	o = ft_strcmp(base, "poneyvif");
	if (d == 0)
		ft_tobase(nbr, base, 10);
	else if (b == 0)
		ft_tobase(nbr, base, 2);
	else if (h == 0)
		ft_tobase(nbr, base, 16);
	else if (o == 0)
	{
		arr = "01234567";
		ft_tobase(nbr, arr, 8);
	}
}
