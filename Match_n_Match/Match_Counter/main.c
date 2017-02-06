#include <stdio.h> 
int		matchn(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("Number of coincidences %i\n", matchn(argv[1], argv[2]));
	else
		printf("Insert two strings\n");
	return (0);
}
