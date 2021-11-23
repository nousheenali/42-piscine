/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:49:24 by nali              #+#    #+#             */
/*   Updated: 2021/05/27 09:19:58 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int j;

	j = ft_iterative_power(5,0);
	printf("%d\n",j);
	
	j = ft_iterative_power(-5,0);
	printf("%d\n",j);

	j = ft_iterative_power(5,-1);
	printf("%d\n",j);

	j = ft_iterative_power(-5,-1);
	printf("%d\n",j);

	j = ft_iterative_power(5,3);
	printf("%d\n",j);

	
	
	return (0);

}
