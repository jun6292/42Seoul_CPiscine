/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:10:59 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/02 21:53:05 by wonjo            ###   ########.fr       */
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
	int			i;
	long long	n;

	i = 0;
	n = nbr;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= base_len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char			*result;
	unsigned int	i;
	long long		n;

	n = nbr;
	i = ft_nbrlen(nbr, ft_strlen(base));
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (n == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	result[i] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[--i] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	return (result);
}
