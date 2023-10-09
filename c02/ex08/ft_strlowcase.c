/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:37:55 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/14 19:27:18 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	fun;

	fun = 0;
	while (str[fun] != '\0')
	{
		if (str[fun] >= 'A' && str[fun] <= 'Z')
		{
			str[fun] += 32;
		}
		fun++;
	}
	str[fun] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	s[] = "HAve a NiCE eValUatioN ;) <3";

	printf("final sting: %s \n", ft_strlowcase(s));
}
*/