/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:32:20 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/25 13:33:43 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_white_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	i = skip_white_space(str);
	result = 0;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("------ ex03 ------\n");
	char ex03_str1[] ="\t   ----++000846545ags56";
	char ex03_str2[] = "  	 \t	-+--1165ataat++-156";
	char ex03_str3[] = "214564564512313546";
	printf("str1 : %s\nft_atoi(str1) = %d\n\n", ex03_str1, ft_atoi(ex03_str1));
	printf("str2 : %s\nft_atoi(str2) = %d\n\n", ex03_str2, ft_atoi(ex03_str2));
	printf("str3 : %s\nft_atoi(str3) = %d\n\n", ex03_str3, ft_atoi(ex03_str3));
	return (0);
}*/
