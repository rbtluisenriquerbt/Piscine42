#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char 	*ft_read_file(int file, char *map)
{
	int i;
	char buffer;

	i = 0;
	while (read(file, &buffer, 1) != '\0')
	{
		map[i] = buffer;
		i++;
	}
	map[i] = '\0';
	return (map);
}