/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:49:24 by nali              #+#    #+#             */
/*   Updated: 2021/05/30 13:36:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
	int j;

	j = ft_fibonacci(5);
	printf("%d\n",j);
	
	j = ft_fibonacci(0);
	printf("%d\n",j);

	j = ft_fibonacci(-8);
	printf("%d\n",j);

	j = ft_fibonacci(6);
	printf("%d\n",j);

	return (0);

}
