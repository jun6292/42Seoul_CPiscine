/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:03:39 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/01 14:50:11 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	i;

	if (min >= max)
		return (NULL);
	n = (int *)malloc(sizeof(int) * (max - min));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}

/*#include <stdio.h>
int main(void)
{
	printf("\n----------------------ex01----------------------------\n");
	long long	min = -1;
	long long	max = 6;
	int *arr = ft_range(min, max);
	if (!arr)
	{
		printf("can't malloc\n");
		return (0);
	}
	printf("min : %lld\nmax : %lld\n\n\n", min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%d\n",arr[i]);
	}
	free(arr);
}*/
