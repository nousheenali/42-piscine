/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:49:24 by nali              #+#    #+#             */
/*   Updated: 2021/05/30 13:09:32 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int i;
	int j;

	i = 0;
	j = ft_iterative_factorial(i);
	printf("%d\n",j);
	
	j = ft_iterative_factorial(5);
	printf("%d\n",j);

	j = ft_iterative_factorial(-9);
	printf("%d\n",j);

	
	
	return (0);

}
