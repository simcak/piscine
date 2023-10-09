/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:32:14 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/20 14:39:55 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/* int	main()
{
	printf("%i \n", ft_recursive_power(2, 4));
} */
