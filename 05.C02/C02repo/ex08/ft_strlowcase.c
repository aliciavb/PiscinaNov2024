/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:05:56 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/18 16:42:57 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = str[i] + 32;
		else if (str[i] == ' ' || str[i] == '+')
		{
			i++;
			str[i] = str[i] + 32;
		}
	}
	return (str);
}

int main(void)
{
        char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

        ft_strcapitalize(string);
        printf("%s", string);   
}
