/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:42:29 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/16 20:40:35 by mvassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

void	init_cons(t_box_map *data, int *in_data)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	while (r < N)
		data->row_cons[r++][0] = in_data[i++];
	r = 0;
	while (r < N)
		data->row_cons[r++][1] = in_data[i++];
	r = 0;
	while (r < N)
		data->col_cons[r++][0] = in_data[i++];
	r = 0;
	while (r < N)
		data->col_cons[r++][1] = in_data[i++];
}

int	main(int ac, char *av[])
{
	int			cons[N * N];
	int			n_found;
	t_box_map	data;

	if (ac != 2)
	{
		print_message(2, "FATAL: Invalid arguments\n");
		return (1);
	}
	n_found = parse_line(cons, sizeof(cons) / sizeof(*cons), av[1]);
	if (n_found == -1)
	{
		print_message(2, "FATAL: NULL arguments\n");
		return (2);
	}
	if (n_found != N * N)
	{
		print_message(2, "FATAL: Invalid number of arguments\n");
		return (3);
	}
	init_grid(&data);
	init_cons(&data, cons);
	if (solve(&data, 0, 0))
		print_grid_ext(&data);
	else
		print_message(1, "No solution found.\n");
	return (0);
}
