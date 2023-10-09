/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:12:05 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/20 14:40:38 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

/* int	main()
{
	printf("%i \n", ft_fibonacci(7));
} */
