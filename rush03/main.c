/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avinals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:25:33 by avinals-          #+#    #+#             */
/*   Updated: 2024/11/10 16:51:23 by avinals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void    control_err(void)
{
        write(1, "Valores de x o y incorrectos", 28);
}

void    rush(int x, int y)
{
        int     eje_x;
        int     eje_y;

        if (x <= 0 || y <= 0)
                control_err();
        eje_y = 1;
        while (eje_y <= y)
        {
                eje_x = 1;
                while (eje_x <= x)
                {
                        if ((eje_x == 1 && eje_y == 1) || (eje_x == 1 && eje_y == y))
                                ft_putchar('A');
                        else if ((eje_x == x && eje_y == 1) || (eje_x == x && eje_y == y))
                                ft_putchar('C');
                        else if (eje_y == 1 || eje_y == y || eje_x == 1 || eje_x == x)
                                ft_putchar('B');
                        else
                                ft_putchar(' ');
                        eje_x++;
                }
                ft_putchar('\n');
                eje_y++;
        }
}

int     main(void)
{
        rush(6, 4);
        return (0);
}

