/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:12:19 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/01 13:09:50 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*result;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	range[0] = result;
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	printf("\n----------------------ex02----------------------------\n");
	int min = -3;
	int	max = -3;
	int *arr;
	printf("min :%d  max: %d\n\n",min, max);
	int result =ft_ultimate_range(&arr, min, max);
	printf("result:::::: len :%d \n\n\n\n",result);
	if (result <= 0)
		printf("ex02 error check is ok\n");
	else
	{
		for (int i = 0; i < result; i++)
		{
			printf("arr[%d] : %d\n", i,arr[i]);
		}
		free(arr);
	}
}*/
