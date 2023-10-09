/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:47:56 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/25 17:48:47 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(*ptr));
	while (!ptr)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	while (min < max)
		ptr[i++] = min++;
	return (i);
}

/* int	main(void)
{
	int	min = 24;
	int	max = 20;
	int	i = 0;
	int	*range;
	int	int_array = ft_ultimate_range(&range, min, max);
	
	while(i < int_array)
		printf("%d, ", range[i++]);
	return (0);
} */
