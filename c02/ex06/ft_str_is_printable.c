/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:52:35 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 15:08:07 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	//char	s[] = "";
	//char	s[] = "abcdefghijklmnop";
	char	s[] = "~ab #CD`E*fg";
	// char	s[] = "4f5";
	// char	s[] = "ABCDEFGH";

	printf("%s is(1) printable or not(0) = %i\n", s, ft_str_is_printable(s));
}
*/