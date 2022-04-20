/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:50:11 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 18:09:23 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	if (*str == '-')
		sign = -1;
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}

int	main(int argc, char*argv[])
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
