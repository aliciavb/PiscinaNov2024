/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:09:32 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/27 17:05:11 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;
	int	i;

	range = max - min;
	array = malloc(range * sizeof(int));
	i = 0;
	if (min >= max)
		return (NULL);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>
int main(void)
{
   	int *array;
    int min = 5;
    int max = 10;

    array = ft_range(min, max);
	printf("%d", *array);
	return 0;
}*/
