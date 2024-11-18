/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:12:42 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/17 12:10:58 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

static int	is_in_row(t_box_map *data, int row, int num)
{
	int	col;

	col = 0;
	while (col < N)
	{
		if (data->grid[row][col] == num)
			return (TRUE);
		col++;
	}
	return (FALSE);
}

static int	is_in_col(t_box_map *data, int col, int num)
{
	int	row;

	row = 0;
	while (row < N)
	{
		if (data->grid[row][col] == num)
			return (TRUE);
		row++;
	}
	return (FALSE);
}

static int	is_valid(t_box_map *data, int r, int c, int num)
{
	if (num < 1 || num > 4)
		return (FALSE);
	if (is_in_row(data, r, num) || is_in_col(data, c, num))
		return (FALSE);
	return (TRUE);
}

int	solve(t_box_map *data, int r, int c)
{
	int	num;

	if (r == N)
		return (check_visibility(data));
	if (c == N)
		return (solve(data, r + 1, 0));
	num = 1;
	while (num <= N)
	{
		if (is_valid(data, r, c, num))
		{
			data->grid[r][c] = num;
			if (solve(data, r, c + 1))
				return (TRUE);
			data->grid[r][c] = 0;
		}
		num++;
	}
	return (FALSE);
}
