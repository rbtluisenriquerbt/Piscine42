#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int 	ft_space_need(char *file_name)
{
	int i;
	char buffer;
	int file;

	file = open(file_name, O_RDONLY);
	i = 0;
	while (read(file, &buffer, 1) != '\0')
		i++;
	close(file);
	return (i);
}