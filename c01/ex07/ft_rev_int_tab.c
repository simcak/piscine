/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:28:48 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/12 17:29:35 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	supp;

	i = 0;
	while (i != size / 2)
	{
		supp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = supp;
		i++;
	}
}

/*
int main(void)
{
    int tab[5] = {1,2,3,4,5};
    int size;

    size = 5;
    ft_rev_int_tab(tab, size);
    printf("seznam: %d, %d, %d, %d, %d \n", 
    enter//tab[0], tab[1], tab[2], tab[3], tab[4]);
    return(0);
}
*/
