/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:35:24 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/21 16:21:07 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	//ex10
    printf("ex10\n");
    char ex10_src[] = "hello my name is !";
	char ex10_dest[10];
    printf("src : %s, size = 6\n", ex10_src);
	printf("ft_strlcpy : %d\n", ft_strlcpy(ex10_dest, ex10_src, 6));
	printf("dest : %s\n\n", ex10_dest);
}*/
