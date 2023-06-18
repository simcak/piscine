/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:26:44 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/12 17:32:04 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sup;

	i = 0;
	while (i != size)
	{
		j = i + 1;
		while (j != size)
		{
			if (tab[j] < tab[i])
			{
				sup = tab[i];
				tab[i] = tab[j];
				tab[j] = sup;
			}
			j++;
		}
		i++;
	}
}

/*
int main(void)
{
    int tab[6] = {1, 51, 13, 23, 2, 1};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("bubble sort: %d, %d, %d, %d, %d, %d \n", 
    enter//tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return(0);
}
*/
