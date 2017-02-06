#include <stdio.h> 
int		rush(int width, int height);
int		ft_atoi(char *str);
int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	else
		printf("Insert two strings\n");
	return (0);
}
