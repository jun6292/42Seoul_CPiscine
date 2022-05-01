/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:10:59 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/01 21:11:26 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_nbrlen(int nbr, int base_len)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*result;
	int		i;

	i = ft_nbrlen(nbr, ft_strlen(base));
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	result[i] = '\0';
	while (nbr > 0)
	{
		result[--i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
	}
	return (result);
}
