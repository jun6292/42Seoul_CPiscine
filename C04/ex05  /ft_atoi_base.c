/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:49:49 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/25 15:43:49 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_white_space(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	check_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (check_white_space(base[i]) || base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	skip_ws(char *str)
{
	int	i;

	i = 0;
	while (check_white_space(str[i]))
		i++;
	return (i);
}

int	start_base_c(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_size;
	int	idx;

	sign = 1;
	result = 0;
	base_size = 0;
	if (check_base_correct(base))
		return (0);
	while (base[base_size])
		base_size++;
	idx = skip_ws(str);
	while (str[idx] && (str[idx] == '+' || str[idx] == '-'))
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (str[idx] && start_base_c(base, str[idx]) != -1)
	{
		result = result * base_size + start_base_c(base, str[idx]);
		idx++;
	}
	return (sign * result);
}

/*#include <stdio.h>
int main(void)
{
	printf("------ ex05 ------\n\n");
	char ex05_str1[] = " \n -+-++-+2147483648";
	char ex05_str2[] = "   ---+AABCDESSEZ";
	char ex05_str3[] = "   ++136667";
	char ex05_str4[] = "   -----+-+!!@@#..<";
	char ex05_str5[] = "  \n \tatoi12-+123base";
	printf("-2147483648\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, "0123456789"));
	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, ""));
	printf("-67174\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABCDES"));
	printf("-1\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABZ"));
	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "A-+"));
	printf("12347\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));
	printf("1126397\n");
	printf("%d\n\n", ft_atoi_base(ex05_str4, "!@#$%^&*()~?><'."));
	printf("27\n");
	printf("%d\n\n", ft_atoi_base(ex05_str5, "atoi"));
}*/
