/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:16:34 by nali              #+#    #+#             */
/*   Updated: 2021/06/03 12:48:39 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft.h"

int main(void)
{
	ft_putchar('s');
	//ft_swap(int *a, int *b);
	printf("\n");
	ft_putstr("abcds\n");
	int l  = ft_strlen("nousheen");
	printf("%d\n",l);
	int i =ft_strcmp("abcd", "abcd");
	printf("%d\n",i);
	return (0);
}
