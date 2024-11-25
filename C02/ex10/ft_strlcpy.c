/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:06:39 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/18 18:29:44 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int main(void)
{
	char str[] = "Hellu wurld";
	char temp[10];
	unsigned int len;
	
	len = ft_strlcpy(temp, str, 8);
	printf("El string en dest es: '%s'\n", temp);
	printf("La longitud del string en src es: %u\n", len);
}*/
