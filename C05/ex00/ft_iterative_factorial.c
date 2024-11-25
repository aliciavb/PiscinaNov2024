/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:36:09 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/24 13:54:51 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char *av[])
{
	int	i =	atoi(av[1]);
	if (ac == 2)
	{
		printf("%d\n", ft_iterative_factorial(i));
		i++;
	}
	return (0);
}*/
