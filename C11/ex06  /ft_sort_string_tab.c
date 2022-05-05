/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:01:04 by wonjo             #+#    #+#             */
/*   Updated: 2022/05/04 20:58:08 by wonjo            ###   ########.fr       */
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

void	swap1(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = 0;
	while (tab[size])
		size++;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				swap1(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	printf("-------ex06-------\n");
	char *ex06_strs[7];
	ex06_strs[0] = "!asdy51";
	ex06_strs[1] = "ASss";
	ex06_strs[2] = "860Ubvou";
	ex06_strs[3] = "!!09~~mlkj";
	ex06_strs[4] = "mlAABkjs";
	ex06_strs[5] = "";
	ex06_strs[6] = 0;
	printf("\nBefore sort\n\n");
	for(int i=0;i<6;i++)
		printf("%s\n",ex06_strs[i]);
	ft_sort_string_tab(ex06_strs);
	printf("\nAfter sort\n\n");
	for(int i=0;i<6;i++)
		printf("%s\n",ex06_strs[i]);
}*/
