/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:54:00 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 13:36:48 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ex03\n");
    char ex03_arr1[] = "asdg";
	char ex03_arr2[] = " a663dtsljljk at;kzcgk";
	char ex03_arr3[] = "12125136";
	char ex03_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex03_arr1, ft_str_is_numeric(ex03_arr1));
    printf("arr2 : %s\n%d\n", ex03_arr2, ft_str_is_numeric(ex03_arr2));
    printf("arr3 : %s\n%d\n", ex03_arr3, ft_str_is_numeric(ex03_arr3));
    printf("arr4 : %s\n%d\n\n", ex03_arr4, ft_str_is_numeric(ex03_arr4));
}*/
