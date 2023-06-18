/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arena.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:53:01 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/09 09:59:35 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i < 123)
	{
        if (i%2 == 1)
        {
            write(1, &i, 1);
		    i ++;
        } else {
            i = i-32;
            write(1, &i, 1);
            i = i +32;
		    i ++;
        }
	}	
}

int     main(void)
{
    ft_print_alphabet();
    return 0;
}
