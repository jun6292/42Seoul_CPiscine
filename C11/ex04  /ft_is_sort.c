/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:42:00 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/03 16:59:18 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	check_sort;
	int	consis;

	i = -1;
	consis = 0;
	if (length <= 1)
		return (1);
	while (++i < length - 1)
	{
		check_sort = f(tab[i], tab[i + 1]);
		if (check_sort == 0)
			continue ;
		if (consis == 0)
			consis = check_sort;
		else if ((check_sort < 0 && consis > 0) \
				|| (check_sort > 0 && consis < 0))
			return (0);
	}
	return (1);
}

/*int ft_cmp(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int main(void)
{
	//ex04
	printf("-------ex04-------\n\n");
	int ex04_arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int ex04_arr2[10] = {5, 2, 3, 1, 5, 6, 3, 8, 2, 10};
	int ex04_arr3[10] = {100, 54, 43, 33, 29, 20, 10, 8, 1, 0};
	int ex04_arr4[1] = {1};
	int ex04_arr5[3] = {1, 1, 2};
	printf("1 : %d\n", ft_is_sort(ex04_arr1, 10, &ft_cmp));
	printf("0 : %d\n", ft_is_sort(ex04_arr2, 10, &ft_cmp));
	printf("1 : %d\n", ft_is_sort(ex04_arr3, 10, &ft_cmp));
	printf("1 : %d\n", ft_is_sort(ex04_arr4, 1, &ft_cmp));
	printf("1 : %d\n\n", ft_is_sort(ex04_arr5, 3, &ft_cmp));
}*/
