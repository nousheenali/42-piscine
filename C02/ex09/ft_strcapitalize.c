/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 20:14:30 by nali              #+#    #+#             */
/*   Updated: 2021/05/25 12:02:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(char *str, int i)
{
	int chk;

	chk = 0;
	if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		chk = 1;
	}
	else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{
		chk = 1;
	}
	else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		chk = 1;
	}
	return (chk);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	while (str[i] != '\0')
	{
		flag = ft_check(str, i);
		if (flag == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
