/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:13:53 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 13:36:25 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ex04\n");
    char ex04_arr1[] = "asdg";
	char ex04_arr2[] = "atsljljkSDTNL";
	char ex04_arr3[] = "51235 sdtlna ;kl";
	char ex04_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex04_arr1, ft_str_is_lowercase(ex04_arr1));
    printf("arr2 : %s\n%d\n", ex04_arr2, ft_str_is_lowercase(ex04_arr2));
    printf("arr3 : %s\n%d\n", ex04_arr3, ft_str_is_lowercase(ex04_arr3));
    printf("arr4 : %s\n%d\n\n", ex04_arr4, ft_str_is_lowercase(ex04_arr4));
}*/
