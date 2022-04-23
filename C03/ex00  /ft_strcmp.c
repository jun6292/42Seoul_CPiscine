/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:57:06 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/23 20:31:31 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abcdefg";
	char s3[] = "abcdefghijklmnop";
	char s4[] = "abcdeffhijklmnop";
	char s5[] = "";
	char s6[] = "123546789";
	char s7[] = "abcdefghijklmnop";
	char s8[] = "abcdef9hijklmnio";
	printf("\n");
	printf("s1 : %s s2 : %s\ncom function : %d\nyour function : %d\n", s1, s2, strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("\n");
	printf("s3 : %s s4 : %s\ncom function : %d\nyour function : %d\n", s3, s4, strcmp(s3, s4), ft_strcmp(s3, s4));
	printf("\n");
	printf("s5 : %s s6 : %s\ncom function : %d\nyour function : %d\n", s5, s6, strcmp(s5, s6), ft_strcmp(s5, s6));
	printf("\n");
	printf("s7 : %s s8 : %s\ncom function : %d\nyour function : %d\n", s7, s8, strcmp(s7, s8), ft_strcmp(s7, s8));
	printf("\n");
	return (0);
}
