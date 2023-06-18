/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:17:11 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/12 17:21:11 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

/*
int	main()
{
	int	a;
	int b;
    int num1;
    int num2;

    a = 8;
    b = 2;
    ft_div_mod(a, b, &num1, &num2);
	printf("modulo: %i and div: %i", num1, num2);
}
*/
