/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:20:34 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/22 21:25:56 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*ptr;

	i = 0;
	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (!ptr)
		return (0);
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}

/* int	main(void)
{
	int	min = 25;
	int	max = 20;
	int	i = 0;
	int	*int_array = ft_range(min, max);
	
	while(i < max - min)
		printf("%d, ", int_array[i++]);
	free(int_array);
	return (0);
} */
