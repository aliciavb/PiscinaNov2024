/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:20:34 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/24 12:23:06 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[aux] != '\0')
	{
		dest[i] = src[aux];
		i++;
		aux++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char str1[] = "Hello ";
	char str2[] = "world";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
}*/
