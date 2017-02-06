#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_count_fc(char *map);

int 	ft_atoi(char *str, int max);

int 	ft_take_info_char_nrinfo(char *map)
{
	int n_fc;
	n_fc = ft_count_fc(map);
	return (ft_atoi(map, n_fc - 3));
}