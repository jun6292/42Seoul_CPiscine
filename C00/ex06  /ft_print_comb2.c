/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:19:58 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/18 14:28:47 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int n)
{
	char	a;
	char	b;

	a = n / 10 + '0';
	b = n % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print_num(x);
			write(1, " ", 1);
			print_num(y);
			if (x != 98 || y != 99)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
