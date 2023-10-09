/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:00:56 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/20 14:38:28 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	r_num;

	r_num = 1;
	while (nb > 1)
	{
		ft_recursive_factorial(nb - 1);
		r_num *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (r_num);
}

/* int	main()
{
	printf("%i \n", ft_recursive_factorial(3));
} */