/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:34:50 by nali              #+#    #+#             */
/*   Updated: 2021/05/30 08:38:16 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_initboard(int *input);

int	ft_chk_condition(char argi, char argi1, char argi0)
{
	if (!(argi >= '1' && argi <= '4'))
		return (0);
	if (!((argi1 == ' ') || ((argi1 == 0) && (argi0 == ' '))))
		return (0);
	return (1);
}

int	ft_checksyntax(char *input)
{
	int	i;
	int	count_err;

	i = 0;
	count_err = 0;
	while (input[i])
	{
		if (input[i] == '4')
			count_err++;
		i++;
	}
	if (count_err > 4)
		return (0);
	i = 0;
	count_err = 0;
	while (input[i])
	{
		if (input[i] == '1')
			count_err++;
		i++;
	}
	if (count_err > 4)
		return (0);
	return (1);
}

int	ft_checkinput(char *arg, int *input)
{
	int i;
	int out;

	i = 0;
	out = 0;
	if (ft_checksyntax(arg) == 1)
	{
		while (arg[i])
		{
			if (ft_chk_condition(arg[i], arg[i + 1], arg[i - 1]) == 1)
			{
				input[out] = (arg[i] - '0');
				out++;
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int input[16];
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc == 2)
	{
		i = ft_checkinput(argv[1], input);
		if (i == 16)
			ft_initboard(input);
		else
			write(1, "\nInvalid Input\n\n", 15);
	}
	else
		write(1, "\nUsage: ./a.out string\n\n", 23);
	return (0);
}
