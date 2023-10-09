/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:47:42 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/30 07:52:01 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_count;
	int	i;

	dest_count = 0;
	i = 0;
	while (dest[dest_count])
		dest_count++;
	while (src[i])
		dest[dest_count++] = src[i++];
	dest[dest_count] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r_string;
	int		len_of_r_str;
	int		j;

	j = 0;
	len_of_r_str = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (j < size)
		len_of_r_str += ft_strlen(strs[j++]);
	len_of_r_str += ft_strlen(sep) * (size - 1);
	r_string = (char *)malloc(len_of_r_str + 1 * sizeof(*r_string));
	if (!r_string)
		return (0);
	j = 0;
	while (j < size)
	{
		ft_strcat(r_string, strs[j++]);
		if (j < size)
			ft_strcat(r_string, sep);
	}
	return (r_string);
}

/* int	main()
{
	char	*strs[] = {"Hello", "world", "how", "R", "U?", NULL};
	char	sep[] = " SPACE ";
	int		size = 0; // how many words are in strs
	while (strs[size])
		size++;
	char *str = ft_strjoin(size, strs, sep);
	printf("%s\n", str);
	free(str);
	return (0);
} */
