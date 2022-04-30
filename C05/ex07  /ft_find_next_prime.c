/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:02:01 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/30 15:59:46 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	long long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (1)
	{
		if (ft_is_prime2(nb))
			return (nb);
		nb += 1;
	}
}
