/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:33:21 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 17:56:12 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if ('a' <= *temp && *temp <= 'z')
			*temp -= 32;
		temp++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	//ex07
    printf("ex07\n");
    char ex07_str[] = "Hello world!";
    printf("before : %s\n", ex07_str);
	printf("after : %s\n\n", ft_strupcase(ex07_str));
}*/
