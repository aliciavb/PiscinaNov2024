/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:01:43 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/07 16:23:47 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_alphabet(void)
{
	char letter = 'a';
	while(letter <= 'z'){
		write(1, &letter, 1);
		letter++;
	}
}
int main(void)
{
	ft_print_alphabet();
	return(0);
}
