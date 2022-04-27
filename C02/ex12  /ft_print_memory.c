/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:28:33 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/27 15:59:49 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	printable_c(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_hex_content(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i] && i < 16)
	{
		print_hex(str[i]);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	if (str[i] == '\0')
		print_hex('\0');
}

void	print_content_printable(unsigned char *str)
{
	int	i;
	int	size;
	int	j;

	size = 0;
	while (str[size])
		size++;
	i = 0;
	while (i < 16 - size)
	{
		write(1, " ", 1);
		i++;
	}
	j = 0;
	while (str[j] && j < 16)
	{
		if (printable_c(str[j]))
			write(1, &str[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	if (str[j] == '\0')
		write(1, ".", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		j = 56;
		while (j >= 0)
		{
			print_hex(((unsigned long long)(addr + i)) >> j);
			j -= 8;
		}
		write(1, ": ", 2);
		print_hex_content((unsigned char *)(addr + i));
		print_content_printable((unsigned char *)(addr + i));
		i += 16;
		write(1, "\n", 1);
	}
	return (addr);
}

/*int	main()
{
	char	str[93] = "Bonjour les aminches   c  est \
	fou tout ce qu on peut faire avec   print_memory    lol lol";
	str[20] = 0x09;
 	str[21] = 0x0a;
 	str[22] = 0x09;
 	str[33] = 0x09;
 	str[38] = 0x09;
 	str[63] = 0x09;
 	str[64] = 0x0a;
 	str[65] = 0x09;
 	str[78] = 0x0a;
 	str[79] = 0x0a;
 	str[80] = 0x0a;
 	str[81] = 0x09;
	str[85] = 0x2e;
	str[89] = 0x0a;
	str[90] = 0x20;
	ft_print_memory(str, 93);
}*/
