/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:01:00 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/17 20:28:52 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int n, char st_cha, char md_cha, char ed_cha);

void	rush(int x, int y)
{	
	int	i;

	if (x <= 0 || y <= 0)
	{
		write(1, "invalid input\n", 14);
		return ;
	}
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			print_line(x, 'A', 'B', 'A');
		else if (i == y)
			print_line(x, 'C', 'B', 'C');
		else
			print_line(x, 'B', ' ', 'B');
		i++;
	}
}

void	print_line(int n, char st_cha, char md_cha, char ed_cha)
{
	int	j;

	j = 1;
	while (j <= n)
	{
		if (j == 1)
		{
			ft_putchar(st_cha);
		}
		else if (j == n)
		{
			ft_putchar(ed_cha);
		}
		else
		{
			ft_putchar(md_cha);
		}
		j++;
	}
	write(1, "\n", 1);
}
