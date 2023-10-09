/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:39:23 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/15 11:12:43 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_count;
	int	i;

	dest_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_count] = src[i];
		dest_count++;
		i++;
	}
	dest[dest_count] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[29] = "<";
	char src[] = "3";

	printf("%s \n", ft_strcat(dest, src));
}
*/