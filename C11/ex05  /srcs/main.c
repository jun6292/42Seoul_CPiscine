/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:29:39 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/05 13:24:18 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*check_err(int nb, char c)
{
	char	*err[2];

	err[0] = "Stop : division by zero";
	err[1] = "Stop : modulo by zero";
	if (nb == 0 && c == '/')
		return (err[0]);
	if (nb == 0 && c == '%')
		return (err[1]);
	return (0);
}

int	calc(int a, int b, char c)
{
	static int	(*fp)(int, int);

	if (c == '+')
		fp = add;
	else if (c == '-')
		fp = sub;
	else if (c == '*')
		fp = mul;
	else if (c == '/')
		fp = div;
	else if (c == '%')
		fp = mod;
	return (fp(a, b));
}

int	is_operator(char op)
{
	return (op == '+' || op == '-' || op == '*' || op == '/' || op == '%');
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;

	if (argc != 4)
		return (0);
	op = argv[2][0];
	if (argv[2][1] || !is_operator(op))
	{
		write(1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (b == 0 && op == '/')
		write(1, check_err(0, '/'), ft_strlen(check_err(0, '/')));
	else if (b == 0 && op == '%')
		write(1, check_err(0, '%'), ft_strlen(check_err(0, '%')));
	else
		ft_putnbr(calc(a, b, op));
	ft_putchar('\n');
}
