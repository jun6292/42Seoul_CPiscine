/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:13:51 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/01 22:55:33 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int nbr, char *base);
int		ft_strlen(char *str);
int		ft_nbr_len(int nbr, int base_len);

int	skip_ws(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
			i++;
	}
	return (i);
}

int	check_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((9 <= base[i] && base[i] <= 13) || base[i] == '+' || base[i] == '-')
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

int	find_base_c(char *base, char c)
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
	int	base_len;
	int	idx;

	base_len = ft_strlen(base);
	sign = 1;
	result = 0;
	idx = skip_ws(str);
	while (str[idx] && (str[idx] == '+' || str[idx] == '-'))
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (str[idx] && find_base_c(base, str[idx]) != -1)
	{
		result = result * base_len + find_base_c(base, str[idx]);
		idx++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		conv;
	char	*result;

	if (check_base_correct(base_from) || check_base_correct(base_to))
		return (NULL);
	printf("%d\n", 1);
	conv = ft_atoi_base(nbr, base_from);
	printf("%d\n", conv);
	result = ft_itoa_base(conv, base_to);
	printf("%s\n", result);
	return (result);
}

//#include <stdio.h>
int main(void)
{
	printf("-------ex04-------\n\n");
	char *str;
	str = ft_convert_base("15858", "012345678", "0123456789ABCDEF");
	printf("2A9B : %s\n", str);
	free(str);
	str = ft_convert_base("  \t \n -+-+-28909abc", "0123456789abcdef", "0123456789ABCDEFGHIJ");
	printf("-ACDADBG : %s\n", str);
	free(str);
	str = ft_convert_base(" --zzixzoz", "ozix", "POIUYTREWQ");
	printf("TWYO : %s\n", str);
	free(str);
	char base[6] = {-19, 66, -1, -8, -20, 0};
	str = ft_convert_base("++858a112", "845a", base);
	printf("B?? : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01234aa5678", "012345679ABCDEF");
	printf("null : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01278", "0");
	printf("null : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01-278", "019ABCDEF");
	printf("null : %s\n\n", str);
	free(str);
	return (0);
}
