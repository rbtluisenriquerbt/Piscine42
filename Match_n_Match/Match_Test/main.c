#include <stdio.h> 
int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("Result: %i\n", match(argv[1], argv[2]));
	else
		printf("Insert two strings\n");
	return (0);
}
