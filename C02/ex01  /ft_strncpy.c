/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:24:38 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/19 21:17:44 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ex01\n");
    char ex01_src[] = "Hello world!";
	char ex01_dest[20] = "whatthehell";
	char ex01_t_src[] = "Hello world!";
	char ex01_t_dest[20] = "whatthehell";
	printf("src : %s\nn = 5\n", ex01_src);
	ft_strncpy(ex01_dest, ex01_src, 5);
	printf("ft_strncpy : %s\n\n", ex01_dest);
	strncpy(ex01_t_dest, ex01_t_src, 5);
	printf("strncpy: %s\n\n", ex01_dest);
}*/
