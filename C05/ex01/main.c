/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:49:24 by nali              #+#    #+#             */
/*   Updated: 2021/05/30 16:34:41 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	int i;
	int j;

	i = 5;
	j = ft_recursive_factorial(i);
	printf("%d\n",j);
	return (0);

}
