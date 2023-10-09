/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:15:05 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 15:06:10 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	st[] = "";
	//char	st[] = "42";
	//char	st[] = "Hell oworld";
	//char	st[] = "4p2";

	printf("%d \n", ft_str_is_numeric(st));
	return(0);
}
*/