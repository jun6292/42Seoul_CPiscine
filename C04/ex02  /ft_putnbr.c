/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:32:16 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/25 21:18:27 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar1('-');
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		if (0 <= nb && nb < 10)
		{
			nb += '0';
			ft_putchar1(nb);
		}
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(-42);
	ft_putnbr(2147483647);
	ft_putnbr(0);
	ft_putnbr(234567);
	ft_putnbr(-7);
	return (0);
}*/
