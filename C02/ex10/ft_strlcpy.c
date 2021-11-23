/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:37:50 by nali              #+#    #+#             */
/*   Updated: 2021/05/25 12:44:12 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		n;

	n = 0;
	while (*src != '\0' && n + 1 < size)
	{
		*dest = *src;
		src++;
		dest++;
		n++;
	}
	*dest = '\0';
	return (n);
}
