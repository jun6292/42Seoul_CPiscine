/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:40:30 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/01 14:51:04 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>
int	main(void)
{
	printf("\n----------------------ex00----------------------------\n");
	char arr[10] = "abcdef ";
	char *src;
	src = ft_strdup(arr);
	printf("%s",src);
}*/
