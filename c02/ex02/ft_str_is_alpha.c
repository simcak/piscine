/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:57:41 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 15:05:40 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			count++;
		else if (str[0] == '\0')
			count++;
		i++;
	}
	if (count == i)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	//char	st[] = "42";
	char	st[] = "Hell oworld";
	//char	st[] = "4p2";

	printf("%d \n", ft_str_is_alpha(st));
	return(0);
}
*/