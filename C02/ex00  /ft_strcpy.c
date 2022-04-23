/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:59:37 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/19 21:25:50 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ex00\n");
    char ex00_src[] = "hello world!";
	char ex00_dest[20] = "hello world!@#$&^";


	strcpy(ex00_dest, ex00_src);
	printf("strcpy : %s\n\n", ex00_dest);

	printf("%c", ex00_dest[13]);
	printf("%c", ex00_dest[14]);
	printf("%c", ex00_dest[15]);
}*/
