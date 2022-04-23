/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:42:36 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 17:32:01 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ex06\n");
    char ex06_arr1[] = "asdg";
	char ex06_arr2[] = "ASNLTLKAT";
	char ex06_arr3[] = "한국";
	char ex06_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex06_arr1, ft_str_is_printable(ex06_arr1));
    printf("arr2 : %s\n%d\n", ex06_arr2, ft_str_is_printable(ex06_arr2));
    printf("arr3 : %s\n%d\n", ex06_arr3, ft_str_is_printable(ex06_arr3));
    printf("arr4 : %s\n%d\n\n", ex06_arr4, ft_str_is_printable(ex06_arr4));
}*/
