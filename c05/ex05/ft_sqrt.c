/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:22:52 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/21 15:02:25 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	index;

	x = nb;
	index = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (index * index <= nb && index * index > 0)
	{
		if (index * index == x)
			return (index);
		index++;
	}
	return (0);
}

/* int	main(void)
{
	clock_t start, end;
    // Store time before function call
    start = clock();
    printf("%d IS THE SQUARE ROOT OF UR NR\n\n", ft_sqrt(2147483647));
   	// Store time after function call
   	end = clock();
   	// Get the time taken by program to execute in seconds
   	double duration = ((double)end - start)/CLOCKS_PER_SEC;
     
   	printf("Time taken to execute in seconds : %f\n", duration);
    return 0;
} 
*/