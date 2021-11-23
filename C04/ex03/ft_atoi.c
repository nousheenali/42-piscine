/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:07:18 by nali              #+#    #+#             */
/*   Updated: 2021/05/29 11:47:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_space_sign(char ch, int sign)
{
	if (ch == '-')
	{
		sign = sign * -1;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int sign;
	int j;
	int flag;

	sign = 1;
	flag = 0;
	j = 0;
	while (*str != '\0')
	{
		if ((*str == '-' || *str == ' ' || *str == '+') && flag == 0)
		{
			sign = ft_check_space_sign(*str, sign);
		}
		else if (*str >= '0' && *str <= '9')
		{
			flag = 1;
			j = (j * 10) + (*str - '0');
		}
		else
		{
			return (sign * j);
		}
		str++;
	}
	return (sign * j);
}
