#include <stdio.h> 
int		ft_atoi(char *str);
void		santastua(int size);
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		santastua(ft_atoi(argv[1]));
	}
	else
		printf("Insert a positive integer\n");
	return (0);
}
