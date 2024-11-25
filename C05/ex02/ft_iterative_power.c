/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:57:26 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/25 14:48:46 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 3)
		printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
