/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:49:24 by nali              #+#    #+#             */
/*   Updated: 2021/05/30 13:24:09 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	int j;

	j = ft_recursive_power(5,0);
	printf("%d\n",j);
	
	j = ft_recursive_power(-5,0);
	printf("%d\n",j);

	j = ft_recursive_power(5,-1);
	printf("%d\n",j);

	j = ft_recursive_power(-5,-1);
	printf("%d\n",j);

	j = ft_recursive_power(-5,3);
	printf("%d\n",j);

	
	
	return (0);

}
