/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:45:28 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/28 23:34:13 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BSQ.h"

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

int	ft_char_is_alphanumeric(char character)
{
	if ((character >= 97) && (character <= 122))
		return (1);
	else if ((character >= 65) && (character <= 90))
		return (2);
	else if ((character >= 48) && (character <= 57))
		return (3);
	else
		return (0);
}

t_our_struct	ft_errors(int error_num, t_our_struct bsq)
{
	if (error_num == 1 || error_num == 2)
		bsq.error = 1;
	return (bsq);
}
