/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:44:07 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/20 14:37:45 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	r_num;

	r_num = 1;
	while (nb > 0)
	{
		r_num *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (r_num);
}

/*
int	main()
{
	int	nb;

	nb = 4;
	printf("%i \n", ft_iterative_factorial(nb));
} */