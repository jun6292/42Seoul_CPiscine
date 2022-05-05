/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:13:44 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/04 21:18:02 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;

	size = ft_strlen(tab);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*int	ft_strcmp11(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
#include <stdio.h>
int main(void)
{
	printf("-------ex07-------\n");
	char *ex07_strs[7];
	ex07_strs[0] = "!asdy51";
	ex07_strs[1] = "ASss";
	ex07_strs[2] = "860Ubvou";
	ex07_strs[3] = "!!09~~mlkj";
	ex07_strs[4] = "mlAABkjs";
	ex07_strs[5] = "";
	ex07_strs[6] = 0;
	printf("\nBefore sort\n\n");
	for(int i=0;i<6;i++)
		printf("%s\n",ex07_strs[i]);
	ft_advanced_sort_string_tab(ex07_strs, &ft_strcmp11);
	printf("\nAfter sort\n\n");
	for(int i=0;i<6;i++)
		printf("%s\n",ex07_strs[i]);
}*/
