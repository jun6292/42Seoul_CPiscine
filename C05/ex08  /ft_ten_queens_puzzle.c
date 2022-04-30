/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:51:54 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/28 14:35:12 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

void	print_queens(char *board)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &board[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	promising(char *board, int cdx)
{
	int	i;

	i = 0;
	while (i < cdx)
	{
		if (board[i] == board[cdx] || cdx - i == ft_abs(board[cdx] - board[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ten_queens(char *board, int cdx, int *cnt)
{
	int	i;

	if (cdx == 10)
	{
		(*cnt)++;
		print_queens(board);
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			board[cdx] = i + '0';
			if (promising(board, cdx))
				ten_queens(board, cdx + 1, cnt);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		i;
	int		*cnt;
	int		count;

	count = 0;
	cnt = &count;
	i = 0;
	ten_queens(board, 0, cnt);
	return (*cnt);
}

/*#include <stdio.h>
int	main(void)
{
	printf("\n----------------------ex08----------------------------\n");
	int result = ft_ten_queens_puzzle();
	printf("\n\n\n\n result ::::: %d\n\n\n\n",result);
	
	return (0);
}*/
