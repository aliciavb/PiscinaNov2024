/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:25:17 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/16 20:41:29 by mvassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H
# define N	4
# define TRUE	1
# define FALSE	0

typedef struct s_box_map
{
	int	grid[N][N];
	int	row_cons[N][N];
	int	col_cons[N][N];
}	t_box_map;

int		solve(t_box_map *data, int r, int c);
int		count_visible(int *row, int left_to_right);
int		check_row_visibility(t_box_map *data);
int		check_col_visibility(t_box_map *data);
int		check_visibility(t_box_map *data);
void	print_message(int where, char *msg);
void	print_grid(t_box_map *data);
void	print_grid_ext(t_box_map *data);
#endif
