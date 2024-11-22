/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:57:10 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/20 12:25:13 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	aux;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	aux = 0;
	while (aux < nb && src[aux] != '\0')
	{
		dest[i + aux] = src[aux];
		aux++;
	}
	dest[i + aux] = '\0';
	return (dest);
}

/*int main(void)
{
	char str1[] = "Hello ";
	char str2[] = "world";

	ft_strncat(str1, str2, 20);
	printf("%s\n", str1);
	printf("%s\n", str2);
}*/
