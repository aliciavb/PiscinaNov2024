/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:01 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/25 12:02:33 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 3)
		printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
