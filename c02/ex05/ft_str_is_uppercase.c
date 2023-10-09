/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:44:29 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 15:07:38 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main()
{
	//char    s[] = "";
    //char    s[] = "abcdefghijklmnop";
    //char    s[] = "abCDEfg";
    //char    s[] = "4f5";
	char    s[] = "ABCDEFGH";

    printf("%s is(1) upcs or not(0) = %i\n", s, ft_str_is_uppercase(s));
}
*/