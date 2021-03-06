/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:53:41 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/23 11:56:35 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	//ex06//
	char ex05_arr[] = "Hello 42!";
	printf("ex06\n");
	printf("str : %s\n", ex05_arr);
	printf("strlen : %d\n\n", ft_strlen(ex05_arr));
}*/
