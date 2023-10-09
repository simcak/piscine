/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:30:23 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 15:07:06 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main()
{
	//char    s[] = "";
	//char    s[] = "abcdefghijklmnop";
	char    s[] = "abCDEfg";
	//char    s[] = "4f5";

	printf("%s is(1) lwrcs or not(0) = %i\n", s, ft_str_is_lowercase(s));
}
*/