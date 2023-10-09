/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:11:09 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/26 22:37:32 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num_sign(int sign, int number)
{
	if (sign % 2 == 1)
		return (-number);
	else
		return (number);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 0;
	number = 0;
	while (str[i])
	{
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign++;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (num_sign(sign, number));
			i++;
		}
		i++;
	}
	return (0);
}


int	main()
{
	char	str[] = "    ---+--+a1234ab567";
	printf("%i \n", ft_atoi(str));
}

