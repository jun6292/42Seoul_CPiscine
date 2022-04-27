/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:22:54 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/27 12:31:14 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	n;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			if (str[i] < 0)
			{
				n = str[i] + 256;
				write(1, "\\", 1);
				print_hex(n);
			}
			else
			{
				write(1, "\\", 1);
				print_hex(str[i]);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	//ex11
    printf("ex11\n");
    char ex11_str[] = "Coucou\ntu vas bien ?";
    printf("str : %s\n", ex11_str);
	ft_putstr_non_printable(ex11_str);
    printf("\n");
}*/
