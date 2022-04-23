/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:33:03 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/23 11:36:19 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*#include <stdio.h>
int main(void)
{
int ex08_arr[] = {1, 15, 75, 99, 195, 2, 5, 33, 18, 30, 39};
	int ex08_i;
	
	printf("ex08\n");
	printf("before sort : ");
	for(ex08_i = 0; ex08_i < 11; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		if (ex08_i == 10)
			break ;
		printf(", ");
	}
	printf("\n");
	printf("after sort : ");
	ft_sort_int_tab(ex08_arr, 11);
	for(ex08_i = 0; ex08_i < 11; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		if (ex08_i == 10)
			break ;
		printf(", ");
	}
	printf("\n");
}*/
