/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:55:54 by nali              #+#    #+#             */
/*   Updated: 2021/05/31 13:56:28 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_prime(int nb, int i)
{
	if (i < nb && nb < 2147483647)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		return (ft_check_prime(nb, i + 1));
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2147483647)
	{
		return (2147483647);
	}
	else if (nb <= 1)
	{
		nb = 2;
	}
	while (ft_check_prime(nb, i) == 0)
	{
		nb++;
	}
	return (nb);
}
