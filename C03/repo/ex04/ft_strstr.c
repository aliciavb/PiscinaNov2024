/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:07:33 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/22 11:16:04 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	aux;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		while (str[i + aux] == to_find[aux] && to_find[aux] != '\0')
			aux++;
		if (to_find[aux] == '\0')
			return (&str[i]);
		i++;
		aux = 0;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "Wo";
	
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
