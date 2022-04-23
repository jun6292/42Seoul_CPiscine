/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:51:30 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 17:55:37 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if ('A' <= *temp && *temp <= 'Z')
			*temp += 32;
		temp++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	//ex08
    printf("ex08\n");
    char ex08_str[] = "Hello WORLD!";
    printf("before : %s\n", ex08_str);
	printf("after : %s\n\n", ft_strlowcase(ex08_str));
}*/
