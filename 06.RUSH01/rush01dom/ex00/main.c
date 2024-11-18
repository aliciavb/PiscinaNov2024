/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:42:29 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/17 16:36:27 by mvassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

int	parse_line(int *ns, int size_ns, char *txt);

void	init_grid(t_box_map *data)
{
	int	r;
	int	c;

	r = 0;
	while (r < N)
	{
		c = 0;
		while (c < N)
		{
			data->grid[r][c] = 0;
			c++;
		}
		r++;
	}
}

int	init_cons(t_box_map *data, int *in_data)
{
	int	r;
	int	i;

	i = 0;
	while (i < N * N)
	{
		if (in_data[i] < 1 || in_data[i] > N)
			return (-1);
		i++;
	}
	i = 0;
	r = 0;
	while (r < N)
		data->top_cons[r++] = in_data[i++];
	r = 0;
	while (r < N)
		data->bottom_cons[r++] = in_data[i++];
	r = 0;
	while (r < N)
		data->left_cons[r++] = in_data[i++];
	r = 0;
	while (r < N)
		data->right_cons[r++] = in_data[i++];
	return (0);
}

int	main(int ac, char *av[])
{
	int			cons[4 * N];
	int			n_found;
	t_box_map	data;

	if (ac != 2)
	{
		print_message(2, "Error\n");
		return (1);
	}
	n_found = parse_line(cons, sizeof(cons) / sizeof(*cons), av[1]);
	if (n_found != N * N || init_cons(&data, cons) < 0)
	{
		print_message(2, "Error\n");
		return (3);
	}
	init_grid(&data);
	if (solve(&data, 0, 0))
		print_grid(&data);
	else
		print_message(1, "Error\n");
	return (0);
}
