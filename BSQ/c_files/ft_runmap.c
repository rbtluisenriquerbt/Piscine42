#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		ft_verifymap(char *map, int nrow_info, int nrow, char *emp_obs_ful);
char 	*ft_take_content(char *map);
char 	*ft_take_info_char(char *map);
char	ft_take_info_char_nrinfo(char *map);
int		ft_count_fc(char *map);
int 	ft_count_col(char *map);
int 	ft_count_row(char *map);
int		ft_draw(char *str, int q_col, int q_row, char *g_emp_obs_ful);
void	ft_putstr(char *str);

void 	ft_runmap(char *map)
{
	char *emp_obs_ful;
	int	nrow_info;
	int	nrow;
	int	ncol;
	emp_obs_ful = (char*)malloc(sizeof(char) * (5));
	emp_obs_ful[0] = 0;
	emp_obs_ful[1] = 0;
	emp_obs_ful[2] = 0;
	emp_obs_ful = ft_take_info_char(map);
	nrow_info = ft_take_info_char_nrinfo(map);
	map = ft_take_content(map);
	ncol = ft_count_col(map);
	nrow = ft_count_row(map);
	if (ft_verifymap(map, nrow_info, nrow, emp_obs_ful))
		ft_draw(map, ncol, nrow, emp_obs_ful);
	else
		ft_putstr("map error\n");
}