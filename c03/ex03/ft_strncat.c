/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:10:58 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/15 11:16:48 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_count;
	unsigned int	src_count;

	dest_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	src_count = 0;
	while (src[src_count] != '\0' && src_count < nb)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[29] = "Hello ";
	char src[] = "my evaluator";

	printf("%s \n", ft_strncat(dest, src, 12));
}
*/
