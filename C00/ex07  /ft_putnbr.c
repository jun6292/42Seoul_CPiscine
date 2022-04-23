/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:32:32 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 15:53:18 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			a = '-';
			write(1, &a, 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		if (0 <= nb && nb < 10)
		{
			b = nb + '0';
			write(1, &b, 1);
		}
	}
}

/*#include <stdio.h>
int main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(3);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	return (0);
}*/
