/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:22:30 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/20 16:29:23 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);
int main(void)
{
    int str[] = {5, 4, 3, 2, 1};
    int str1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\n");
    printf("input size : 5      tab : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");
    ft_rev_int_tab(str, 5);
    printf("your result : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n\n");
    printf("input size : 10      tab : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", str1[i]);
    }
    printf("\n");
    ft_rev_int_tab(str1, 10);
    printf("your result : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", str1[i]);
    }
	printf("\n\n");
    return (0);
}*/
