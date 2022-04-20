/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:05:17 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 16:24:20 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*#include <stdio.h>
int main(void)
{
	//ex05
	printf("ex05\n");
	char ex05_arr[] = "Hello 42!";
	ft_putstr(ex05_arr);
	printf("\n\n");
}*/
