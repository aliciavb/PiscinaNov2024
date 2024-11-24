int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 2)
		printf("%d", ft_recursive_factorial(atoi(av[1])));
	return (0);
}
