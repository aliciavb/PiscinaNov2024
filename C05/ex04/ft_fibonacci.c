/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:03:18 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/25 17:00:16 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 2)
		printf("%d", ft_fibonacci(atoi(av[1])));
	return (0);
}*/
