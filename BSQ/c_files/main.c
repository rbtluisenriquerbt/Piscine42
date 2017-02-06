#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char *g_map;

void	ft_putchar (char c);
void	ft_putstr(char *str);
char	*ft_rinput(int i);
int 	ft_full_analysis(char *map, char *file_name);

int		main(int argc, char **file_name)
{
	int k;
	int file;
	
	if (argc > 0)
	{
		if(argc == 1)
		{
			g_map = ft_rinput(0);
			argc = 2;
			file_name[1] = "std_input.txt";
		}
		k = 1;
		while (k < argc)
		{
			file = open(file_name[k], O_RDONLY);
			if (file == -1)
				ft_putstr("File could no be read");
			else
				ft_full_analysis(g_map, file_name[k]);
			k++;
			if (k != argc)
				ft_putchar('\n');
		}
	}
	free(g_map);
	return (0);
}
