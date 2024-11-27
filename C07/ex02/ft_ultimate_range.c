/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:06:35 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/27 18:16:17 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	array = malloc(**range * sizeof(int));
	i = 0;
	if (min >= max)
	{	
		*range = NULL;
		return (0);
	}
	while (i < **range)
	{
		array[i] = min + i;
		i++;
	}
	return (*array);
}

#include <stdio.h>
int main(void)
{
    int *array;
    int min = 5;
    int max = 10;
	int **range = max - min;

    array = ft_range(range, min, max);
    printf("%d", *array);
    return 0;
}
