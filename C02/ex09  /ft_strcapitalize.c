/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonjo <wonjo@student.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:57:24 by wonjo             #+#    #+#             */
/*   Updated: 2022/04/25 18:31:44 by wonjo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char *str)
{
	if (('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z'))
		return (1);
	if ('0' <= *str && *str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	check_start;
	int	i;

	i = 0;
	check_start = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(&str[i]))
		{
			if (check_start == 1 && ('a' <= str[i] && str[i] <= 'z'))
				str[i] -= 32;
			if (check_start == 0 && ('A' <= str[i] && str[i] <= 'Z'))
				str[i] += 32;
			check_start = 0;
		}
		else
			check_start = 1;
		i++;
	}
	return (str);
}
