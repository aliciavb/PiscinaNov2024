/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:10:41 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/14 13:36:51 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("La división es %d\n", a);
	printf("El resto es  %d\n", b);
}*/
