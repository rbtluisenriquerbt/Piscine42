#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_count_fc(char *map);

char	*ft_take_info_char(char *map)
{
	int n_fc;
	char *emp_obs_ful;

	emp_obs_ful = (char*)malloc(sizeof(char) * (5));
	n_fc = ft_count_fc(map);
	*(emp_obs_ful + 0) = map[n_fc - 3];
	*(emp_obs_ful + 1) = map[n_fc - 2];
	*(emp_obs_ful + 2) = map[n_fc - 1];
	*(emp_obs_ful + 3) = '\0';
	return (emp_obs_ful);
}