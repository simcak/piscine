/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:13:19 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/20 14:39:33 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r_num;

	r_num = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power--)
		r_num *= nb;
	return (r_num);
}

/* int	main()
{
	printf("%i \n", ft_iterative_power(-2, 5));
} */
