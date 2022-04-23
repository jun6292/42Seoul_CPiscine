/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:18:47 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 15:47:52 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combination(char arr[], int n, int index, char print_num)
{
	if (index == n)
	{
		write(1, arr, n);
		if (arr[0] - '0' < 10 - n)
			write(1, ", ", 2);
	}
	else
	{
		while (print_num - '0' <= (10 - n) + index)
		{
			arr[index] = print_num;
			combination(arr, n, index + 1, ++print_num);
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[10];

	if (0 < n && n < 10)
		combination(num, n, 0, '0');
	else
		return ;
}

/*int	main(void)
{
	ft_print_combn(4);
	return (0);
}*/
