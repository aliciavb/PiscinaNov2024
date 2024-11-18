/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvassall <mvassall@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:43:18 by mvassall          #+#    #+#             */
/*   Updated: 2024/11/16 18:03:53 by mvassall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return ((c == ' ') || (c == '\f') || (c == '\n') || (c == '\r')
		|| (c == '\t') || (c == '\v'));
}

int	is_digit(char c)
{
	return (('0' <= c) && (c <= '9'));
}

char	*r_atoi(char *txt, int *val)
{
	*val = -1;
	while ((*txt != '\0') && is_space(*txt))
		txt++;
	while ((*txt != '\0') && is_digit(*txt))
	{
		if (*val < 0)
			*val = *txt - '0';
		else
		{
			*val *= 10;
			*val += *txt - '0';
		}
		txt++;
	}
	while ((*txt != '\0') && is_space(*txt))
		txt++;
	return (txt);
}

int	parse_line(int *ns, int size_ns, char *txt)
{
	int	ins;
	int	val;

	if ((ns == (void *)0) || (size_ns <= 0) || (txt == (void *)0))
		return (-1);
	ins = 0;
	while (*txt)
	{
		txt = r_atoi(txt, &val);
		if (val <= 0)
			break ;
		if (ins < size_ns)
			ns[ins++] = val;
		else
			return (-2);
	}
	return (ins);
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
