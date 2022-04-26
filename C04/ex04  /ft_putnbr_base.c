/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:23:53 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/25 13:43:36 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base_correct1(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	tmp;

	size = 0;
	while (base[size])
		size++;
	if (check_base_correct1(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		tmp = nbr * -1;
	}
	else
		tmp = nbr;
	if (tmp >= size)
	{
		ft_putnbr_base(tmp / size, base);
		ft_putchar(base[tmp % size]);
	}
	else
		ft_putchar(base[tmp % size]);
}
