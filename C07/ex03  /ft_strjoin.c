/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:26:48 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/01 19:59:51 by wonjo            ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	cal_size(int size, char **strs, char *sep)
{
	int	strs_len;
	int	i;

	strs_len = 0;
	if (size == 1)
		return (ft_strlen(strs[0]) + 1);
	i = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		if (i != size - 1)
			strs_len += ft_strlen(sep);
		i++;
	}
	return (strs_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_len;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result = 0;
		return (result);
	}
	strs_len = cal_size(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (strs_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i != size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	printf("-------ex03-------\n\n");
    char *ex03_arr1;
    char *ex03_arr2;
    char *ex03_arr3;
	char *ex03_str[5];
	ex03_str[0] = "hello";
	ex03_str[1] = "my";
	ex03_str[2] = "name";
	ex03_str[3] = "is";
	ex03_str[4] = "wonjo";
	ex03_arr1 = ft_strjoin(5, ex03_str, " ");
    ex03_arr2 = ft_strjoin(5, ex03_str, ".");
    ex03_arr3 = ft_strjoin(5, ex03_str, "-");
	printf("%s\n", ex03_arr1);
    printf("%s\n", ex03_arr2);
    printf("%s\n\n", ex03_arr3);
    free(ex03_arr1);
    free(ex03_arr2);
    free(ex03_arr3);
}*/
