/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:03:14 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/08 20:24:23 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void main(void)
{
    char aa = '0';
    char ab;
    char ba;
    char bb;

    while (aa <= '9')
    {
        ab = '0';
        while (ab <= '9')
        {
            ba = '0';
            while (ba <= '9')
            {
                bb = '0';
                while (bb <= '9')
                {
                    write(1, &aa, 1);
                    write(1, &ab, 1);
                    write(1, " ", 2);
                    write(1, &ba, 1);
                    write(1, &bb, 1);
                    write(1, ", ", 2);

                    bb ++;
                }
                ba ++;
            }
            ab ++;
        }
        aa ++; 
    }   
}