/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:27:05 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/25 16:59:36 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i != nb)
	{
		if (i * i > nb)
			return (0);
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("%d", ft_sqrt(atoi(av[1])));
	}
	return (0);
}*/
