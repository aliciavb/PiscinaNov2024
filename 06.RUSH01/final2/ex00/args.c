/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:43:18 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/17 20:40:28 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ');
}

int	is_digit(char c)
{
	return (('0' <= c) && (c <= '9'));
}

int	parse_line(int *ns, int size_ns, char *txt)
{
	int	i;
	int	ins;

	ins = 0;
	i = 0;
	while (txt[i] != '\0' && ins < size_ns)
	{
		if (i % 2 == 0)
		{
			if (!is_digit(txt[i]))
				return (-1);
			ns[ins++] = txt[i] - '0';
		}
		else
		{
			if (!is_space(txt[i]))
				return (-1);
		}
		i++;
	}
	if (txt[i] == '\0')
		return (ins);
	return (-1);
}
/*
#include <stdio.h>

int main(int ac, char *av[])
{
	int	nums[16];
	int n_nums;

	if (ac != 2)
	{
		fprintf(stderr,"invalid number of arguments\n");
		return (1);
	}
	printf("sizeof(nums) == %lu\n",sizeof(nums));
	printf("sizeof(int) == %lu\n",sizeof(int));
	n_nums = parse_line(nums, sizeof(nums)/sizeof(int), av[1]);
	printf("total numbers found %d\n",n_nums);
	for (int i=0; i < n_nums; i++)
		printf("%d\n",nums[i]);
	return (0);
}
*/
