/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:36:45 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/12 17:22:05 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	sup1;
	int	sup2;

	sup1 = *a / *b;
	sup2 = *a % *b;
	*a = sup1;
	*b = sup2;
}

/*
int main (void)
{
    int inta;
    int intb;
    
    inta = 5;
    intb = 2;
    ft_ultimate_div_mod(&inta, &intb);
    printf("div: %i and mod: %i", inta, intb);
    return (0);
}
*/
