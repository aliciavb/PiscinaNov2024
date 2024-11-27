/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:23:15 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/26 16:32:33 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	while (ac > 1)
	{
		write(1, av[ac - 1], ft_strlen(av[ac - 1]));
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
