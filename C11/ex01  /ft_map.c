/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:26:36 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/04 20:57:19 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*n;

	n = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		n[i] = f(tab[i]);
		i++;
	}
	return (n);
}
