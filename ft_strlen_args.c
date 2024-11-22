#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int main(int argc, char *argv[])
{
	int i;
	printf("argc: %d\n",argc);
	i = 0; 
	while (i < argc)
	{
		printf("argv[%d] = \"%s\" %d\n",i,argv[i],ft_strlen(argv[i]));
		i++;
	}
	return 0;
}
