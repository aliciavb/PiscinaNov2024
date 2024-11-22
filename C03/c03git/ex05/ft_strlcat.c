/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:38:29 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/21 16:27:13 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	aux;	

	len = 0;
	while (dest[len] != '\0')
		len++;

	aux = 0;
	while (aux < size - len - 1 && src[aux] != '\0')
	{
		dest[len + aux] = src[aux];
		aux++;
	}
	if (size <= len)
	{
		return (aux + size);
	}
	return (len + aux);
}

/*int main(void)
{
	char str1[50] = "Hello ";
	char str2[] = "world";

	ft_strlcat(str1, str2, 10);
	printf("%s\n", str1);
	printf("%s\n", str2);
}*/
