/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:37:53 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 13:41:44 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ex05\n");
    char ex05_arr1[] = "asdg";
	char ex05_arr2[] = "ASNLTLKAT";
	char ex05_arr3[] = "51235 ASTNKSKLsdtlna ;kl";
	char ex05_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex05_arr1, ft_str_is_uppercase(ex05_arr1));
    printf("arr2 : %s\n%d\n", ex05_arr2, ft_str_is_uppercase(ex05_arr2));
    printf("arr3 : %s\n%d\n", ex05_arr3, ft_str_is_uppercase(ex05_arr3));
    printf("arr4 : %s\n%d\n\n", ex05_arr4, ft_str_is_uppercase(ex05_arr4));
}*/
