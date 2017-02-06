#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char 	*ft_read_file(int file, char *map);
void	ft_putstr(char *str);

char	*ft_rinput(int i)
{
	int file;
	char buffer;
	char *map;

	file = open ("std_input.txt", O_TRUNC|O_WRONLY);
	file = open("std_input.txt", O_WRONLY);
	while (read(0, &buffer, 1) != '\0')
	{
		write(file, &buffer, 1);
		i++;
	}
	buffer = '\0';
	write(file, &buffer, 1);
	close(file);
	file = open("std_input.txt", O_RDONLY);
	map = (char*)malloc(sizeof(char) * (i + 1));
	if(!map)
	{
		ft_putstr("ERROR: Out of memory\n");
		return(0);
	}
	map = ft_read_file(file, map);
	return (map);
}
