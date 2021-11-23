/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:05:01 by nali              #+#    #+#             */
/*   Updated: 2021/06/02 09:32:13 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_strsort(int count, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if ((ft_strcmp(argv[i], argv[j]) > 0))
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int k;
	int j;

	if (argc > 1)
	{
		j = 0;
		k = 1;
		ft_strsort(argc, argv);
		while (k < argc)
		{
			j = 0;
			while (argv[k][j])
			{
				ft_putchar(argv[k][j]);
				j++;
			}
			ft_putchar('\n');
			k++;
		}
	}
	return (0);
}
