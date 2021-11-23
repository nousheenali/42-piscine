/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:55:54 by nali              #+#    #+#             */
/*   Updated: 2021/05/31 11:03:18 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_prime(int nb, long i)
{
	if (i < nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		return (ft_check_prime(nb, i + 1));
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	long i;

	i = 2;
	if (nb <= 1 && nb > 2147483647)
	{
		return (0);
	}
	else if (nb == 2147483647)
	{
		return (1);
	}
	return (ft_check_prime(nb, i));
}
