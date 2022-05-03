/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:13:51 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/02 22:45:48 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int nbr, char *base);
int		ft_strlen(char *str);
int		ft_nbr_len(int nbr, int base_len);

int	skip_ws(char *str)
{
	int	i;

	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
			i++;
	return (i);
}

int	check_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((9 <= base[i] && base[i] <= 13) || base[i] == 32)
			return (1);
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	find_base_c(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			sign;
	long long	result;
	int			base_len;
	int			idx;

	base_len = ft_strlen(base);
	sign = 1;
	result = 0;
	idx = skip_ws(str);
	while (str[idx] && (str[idx] == '+' || str[idx] == '-'))
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (str[idx] && find_base_c(base, str[idx]) != -1)
	{
		result = result * base_len + find_base_c(base, str[idx]);
		idx++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		conv;
	char	*result;

	if (check_base_correct(base_from) || check_base_correct(base_to))
		return (NULL);
	conv = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(conv, base_to);
	return (result);
}
