/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:56:29 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/12 17:20:16 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}

/*
int	main()
{
    int num1;
    int num2;
    
    num1 = 1;
    num2 = 7;
    ft_swap(&num1, &num2);
	printf("%d and %d", num1, num2);
}
*/
