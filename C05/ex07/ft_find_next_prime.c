/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:26:41 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/25 19:49:37 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac == 2)
        printf("%d", ft_find_next_prime(atoi(av[1])));
    return (0);
}*/
