/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:53:11 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/16 20:42:44 by mvassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "solve.h"

void	print_message(int where, char *msg)
{
	if (msg == (void *)0)
		return ;
	while (*msg)
		write(where, msg++, 1);
}

void	print_grid(t_box_map *data)
{
	int		r;
	int		c;
	char	aux;

	r = 0;
	while (r < N)
	{
		c = 0;
		while (c < N)
		{
			if (c != 0)
				write(1, " ", 1);
			aux = data->grid[r][c] + '0';
			write(1, &aux, 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

void	print_grid_ext(t_box_map *data)
{
	int		r;
	int		c;
	char	aux;

	r = 0;
	write(1, "  ", 2);
	while (r < N)
	{
		if (r != 0)
			write(1, " ", 1);
		aux = data->row_cons[r][0] + '0';
		write(1, &aux, 1);
		r++;
	}
	write(1, "\n", 1);
	r = 0;
	while (r < N)
	{
		aux = data->col_cons[r][0] + '0';
		write(1, &aux, 1);
		write(1, ">", 1);
		c = 0;
		while (c < N)
		{
			if (c != 0)
				write(1, " ", 1);
			aux = data->grid[r][c] + '0';
			write(1, &aux, 1);
			c++;
		}
		write(1, "<", 1);
		aux = data->col_cons[r][1] + '0';
		write(1, &aux, 1);
		write(1, "\n", 1);
		r++;
	}
	r = 0;
	write(1, "  ", 2);
	while (r < N)
	{
		if (r != 0)
			write(1, " ", 1);
		aux = data->row_cons[r][1] + '0';
		write(1, &aux, 1);
		r++;
	}
	write(1, "\n", 1);
}
