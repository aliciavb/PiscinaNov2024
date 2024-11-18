/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:14:04 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/15 12:19:03 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *i, int *size)
{
	int	aux;

	aux = *i;
	*i = *size;
	*size = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}

/*int main(void)
{
	int size = 3;
	int tab[] = {0, 1, 2};

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d", tab[0], tab[1], tab[2]);
}*/
