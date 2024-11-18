/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:23:34 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/17 16:18:20 by mvassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

int	count_visible(int *row, int left_to_right)
{
	int	visible;
	int	max_height;
	int	current_height;
	int	i;

	visible = 0;
	max_height = 0;
	i = 0;
	while (i < N)
	{
		if (left_to_right)
			current_height = row[i];
		else
			current_height = row[N - i - 1];
		if (current_height > max_height)
		{
			visible++;
			max_height = current_height;
		}
		i++;
	}
	return (visible);
}

int	check_row_visibility(t_box_map *data)
{
	int	r;
	int	visible_left;
	int	visible_right;

	r = 0;
	while (r < N)
	{
		visible_left = count_visible(data->grid[r], TRUE);
		visible_right = count_visible(data->grid[r], FALSE);
		if ((visible_left != data->left_cons[r])
			|| (visible_right != data->right_cons[r]))
			return (FALSE);
		r++;
	}
	return (TRUE);
}

int	check_col_visibility(t_box_map *data)
{
	int	r;
	int	c;
	int	visible_top;
	int	visible_bottom;
	int	col[N];

	c = 0;
	while (c < N)
	{
		r = 0;
		while (r < N)
		{
			col[r] = data->grid[r][c];
			r++;
		}
		visible_top = count_visible(col, TRUE);
		visible_bottom = count_visible(col, FALSE);
		if ((visible_top != data->top_cons[c])
			|| (visible_bottom != data->bottom_cons[c]))
			return (FALSE);
		c++;
	}
	return (TRUE);
}

int	check_visibility(t_box_map *data)
{
	return (check_row_visibility(data) && check_col_visibility(data));
}
