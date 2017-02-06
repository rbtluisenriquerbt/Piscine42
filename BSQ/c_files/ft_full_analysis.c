#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int 	ft_space_need(char *file_name);
char 	*ft_read_file(int file, char *map);
void 	ft_runmap(char *map);
void	ft_putstr(char *str);

int 	ft_full_analysis(char *map, char *file_name)
{
	int file;

	map = (char*)malloc(sizeof(char) * (ft_space_need(file_name) + 1));
	file = open(file_name, O_RDONLY);
	if(!map)
	{
		ft_putstr("ERROR: Out of memory\n");
		return(0);
	}
	map = ft_read_file(file, map);
	ft_runmap(map);
	close(file);
	return (1);
}